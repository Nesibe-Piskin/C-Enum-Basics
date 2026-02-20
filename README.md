# C-Enum-Basics
This repository contains a simple C program demonstrating the use of **Enumerations (enums)**.
## Description
The program defines an `enum` named `Levels` to represent different temperature states: `LOW`, `MEDIUM`, and `HIGH`. Enums are used in C to assign names to integral constants, making the code more readable and maintainable.

### Key Concepts
- **Default Values:** By default, the first enum element starts at 0, and each subsequent element increases by 1.
- **Readability:** Using `LOW` instead of a "magic number" like `0` helps other developers understand the code's intent.

## How to Run
1. Ensure you have a C compiler (like GCC) installed.
2. Compile the code:
   ```bash
   gcc main.c -o C-Enum-Basics
   ./enum_example
