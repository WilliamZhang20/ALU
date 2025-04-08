#include "Valu.h"           // Verilator generated header
#include "verilated.h"

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Valu *alu = new Valu;

    // Reset inputs
    alu->operand_a = 0;
    alu->operand_b = 0;
    alu->alu_control = 0;

    // Example 1: ADD 2 + 3
    alu->operand_a = 2;
    alu->operand_b = 3;
    alu->alu_control = 0b0000; // ADD
    alu->eval();
    printf("[ADD] 2 + 3 = %d (expected 5)\n", alu->alu_result);

    // Example 2: SUB 7 - 4
    alu->operand_a = 7;
    alu->operand_b = 4;
    alu->alu_control = 0b0001; // SUB
    alu->eval();
    printf("[SUB] 7 - 4 = %d (expected 3)\n", alu->alu_result);

    // Example 3: MUL 2 * 3
    alu->operand_a = 2;
    alu->operand_b = 3;
    alu->alu_control = 0b0010; // MUL
    alu->eval();
    printf("[MUL] 2 * 3 = %d (expected 6)\n", alu->alu_result);

    delete alu;
    return 0;
}
