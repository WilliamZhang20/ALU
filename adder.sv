// 32-bit adder unit for the ALU
module alu_adder (
    input  logic [31:0] a,
    input  logic [31:0] b,
    input  logic        sub,     // 0 = add, 1 = subtract
    output logic [31:0] sum,
    output logic        carry_out,
    output logic        overflow
);

    logic [31:0] b_invert;
    logic        carry_in;
    logic [31:0] result_temp;

    // Invert b if subtracting
    assign b_invert = sub ? ~b : b;
    assign carry_in = sub;  // Carry in 1 for two's complement subtraction

    // Perform addition
    assign {carry_out, result_temp} = a + b_invert + {31'b0, carry_in};
    
    // Output sum
    assign sum = result_temp;

    // Overflow detection for signed numbers
    assign overflow = (a[31] == b_invert[31]) && (sum[31] != a[31]);

endmodule