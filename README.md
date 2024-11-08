# VOLE Machine Simulator
Welcome to the VOLE Machine Simulator project! This simulation tool is designed to interpret and execute machine instructions, offering a deeper understanding of low-level machine architecture and operation. The project includes functionalities for reading instruction files, manipulating memory and registers, and displaying results in both hexadecimal and ASCII formats.

# Table of Contents
Features
Prerequisites
Usage
Code Structure
Examples

### Features
Start and Exit Interface: Interactive menu to begin or exit the simulation.
File Reading: Reads machine instructions from a specified file path and stores them for execution.
Memory and Register Manipulation: Simulates memory operations and register manipulation based on provided instructions.
Instruction Execution: Supports various instruction types (load, store, arithmetic, and more) with specific handling for binary, hexadecimal, and ASCII formats.
Detailed Output: Prints memory and register states, supporting debugging and analysis.

### Prerequisites
C++ Compiler: Ensure you have a C++ compiler installed, such as GCC or Clang.
C++ IDE: This project has been tested with CLion, but you can use any IDE (such as Visual Studio Code or PyCharm with C++ plugin).

### Usage
Start the program, which presents a menu with options to start or exit.
Choose Start to begin the simulation and specify the path to the instructions file.
Once loaded, the program processes each instruction, updating memory and registers accordingly.
View output, which displays the memory, registers, and screen contents in both hexadecimal and ASCII formats.

### Code Structure
Instructions: Handles user interaction and file reading for loading instructions.
Memory: Manages memory operations and stores simulation data.
Register: Controls register manipulations based on the instruction set.
printSteps: Outputs memory and register states for easy debugging and review.
apply: Executes each instruction based on its opcode, updating memory and registers.

### Examples
To understand the behavior, add a sample instruction file, such as sample_instructions.txt:

12AB
34CD
56EF
Then, when prompted, enter the file path to load the instructions. The program will simulate these instructions and display results.
