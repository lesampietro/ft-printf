# ft-printf
The goal of this project is simple: to program my own `printf()`*, by recreating its behaviour without relying on the original implementation, unsing variadic functions. 
>*The printf function in C is a standard library function used to print formatted output to the console. It is part of the <stdio.h> header file and provides a versatile way to display data of various types by using format specifiers.

## Requirements
Following the original `printf()`, our version should be able to:
- [x] Accept a format string and a variable number of arguments.
- [x] Handle both plain text and placeholders (format specifiers).
- [x] Output the formatted result to the standard output (stdout).
- [x] Return the total number of characters printed.


## Usage
```c
int ft_printf(const char *format, ...);
