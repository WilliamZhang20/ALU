# Arithmetic Logic Unit

A 32-bit Arithmetic Logic Unit (ALU) in SystemVerilog.

Will be capable of adding, bitwise logic, shifting, and comparison.

### How to Compile

Using Verilator C++:

```
verilator --cc --exe --build alu.sv alu_adder.sv alu_logic.sv alu_multiplier.sv tb.cpp
./obj_dir/Valu
```
