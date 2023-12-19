# Low-level Programming 
This repository features all the projects of Holberton School's "low-level programming" section done by Mateo Gallo from C#18.

All of these projects where done in the C programming language using the code editors Vi and Emacs.
## About the C programming language
<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/1853px-C_Programming_Language.svg.png" width="100"/>
</p>
<p>C is a general purpose, Turing-complete, compiled, programming language known as one of the most influential and used languages in history. It was developed between 1969 and 1972 by Dennis Ritchie as an evolution of the B programming language. Similar to B, its main focus was the implementation of operative systems like Unix.</p>
<p>This language features a low-level interaction with the system, which means the interaction between the programmer and the computer is quite close.</p>
<p>C is directly compiled to machine code going through four stages that "translate" the user written code to instructions for the system.</p>

### The syntax
<p>C has influenced a lot of programming languages through years mainly thanks to its fairly simple syntax. Here is an example code written in C:</p>

```c
// Import libraries, in this case to use the printf function
#include <stdio.h>

// Define the main function
int main(void)
{
    // Declare variables to store two numbers
    int num1 = 5;
    int num2 = 10;
    
    // Calculate the sum of the two numbers
    int sum = num1 + num2;
    
    // Print the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    // The exiting value of the program is 0 since all went as expected
    return 0;
}
```

### The compiler
<p>There are various implementations of the C compiler, some of the most famous are GCC and Clang.</p>
<p>These are the four steps the compiler takes before giving an executable of your code as outuput:</p>

- Preprocessing: In this phase, the compiler resolves directives such as <code>#include</code> or <code>#define</code> and removes all the comments there are in the code, resulting in an intermidiate code that is easier to read for the compiler.
- Compilation: Now the code is translated into assembly code or object code, that is specific to the target machine architecture. This means that compiled code that I write on a computer running Windows won't work on a computer that uses macOS.
- Assembly: The code generated is now processed by an assembler, which converts the assembly or object code into machine code, also called "binary code". This code can now be read by the CPU.
- Linking: The final stage consists of multiple source files, the linker combines the magine code generated for each file resolving references between them. The linker produces the final executable file that can be run on the target system.
