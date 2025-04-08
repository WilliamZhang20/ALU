module alu_logic (
    input logic [31:0] a,
    input logic [31:0] b,
    input logic [1:0] logic_sel, // 00: AND, 01: OR, 10: XOR, 11: NOR
    output logic [31:0] logic_result
);

    always_comb begin
        case (logic_sel)
            2'b00: logic_result = a & b;  // AND
            2'b01: logic_result = a | b;  // OR
            2'b10: logic_result = a ^ b;  // XOR
            2'b11: logic_result = ~(a | b); // NOR
            default: logic_result = 32'h0000_0000;
        endcase
    end

endmodule
