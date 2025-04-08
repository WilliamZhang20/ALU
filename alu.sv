module alu (
    input logic [31:0] operand_a,
    input logic [31:0] operand_b,
    input  logic [3:0]  alu_control, // select operation
    output logic [31:0] alu_result,
    output logic        zero,        // result == 0 - USEFUL signal for comparison & conditional branching
    output logic        carry_out,
    output logic        overflow
);

    // Internal signals
    logic [31:0] adder_result;
    logic [31:0] multiplier_result;
    logic [31:0] logic_result;
    logic adder_carry_out;
    logic adder_overflow;

    // Instantiate adder
    alu_adder u_adder (
        .a(operand_a), // tie input signals
        .b(operand_b),
        .sub(alu_control == 4'b0001), // Assume 0000: ADD, 0001: SUB
        .sum(adder_result),
        .carry_out(adder_carry_out),
        .overflow(adder_overflow)
    );

    // Instantiate multiplier
    alu_multiplier u_multiplier (
        .a(operand_a),
        .b(operand_b),
        .product(multiplier_result)
    );

    // Instantiate logic unit
    alu_logic u_logic (
        .a(operand_a),
        .b(operand_b),
        .logic_sel(alu_control[1:0]), // Use lower 2 bits for logic operation
        .logic_result(logic_result)
    );

    // ALU Control Logic:
    // 0000 -> ADD
    // 0001 -> SUB
    // 0010 -> MUL
    // 0100 -> AND
    // 0101 -> OR
    // 0110 -> XOR
    // 0111 -> NOR
    always_comb begin
        case (alu_control)
            4'b0000: alu_result = adder_result;          // ADD
            4'b0001: alu_result = adder_result;          // SUB
            4'b0010: alu_result = multiplier_result;     // MUL
            4'b0100: alu_result = logic_result;          // AND
            4'b0101: alu_result = logic_result;          // OR
            4'b0110: alu_result = logic_result;          // XOR
            4'b0111: alu_result = logic_result;          // NOR
            default: alu_result = 32'hDEAD_BEEF;         // Default error code
        endcase
    end

    assign zero = (alu_result == 32'b0);
    assign carry_out = (alu_control == 4'b0000 || alu_control == 4'b0001) ? adder_carry_out : 1'b0;
    assign overflow = (alu_control == 4'b0000 || alu_control == 4'b0001) ? adder_overflow : 1'b0;

endmodule
