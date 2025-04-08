module alu_multiplier (
    input logic [31:0] a,
    input logic [31:0] b,
    output logic [31:0] product
);

    // outputting only lower 32 bits
    assign product = a * b;

endmodule
