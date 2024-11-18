# ft_printf | 42
>Because `ft_putnbr()` & `ft_putsrt()` are not enough.
## Project Overview
The goal of this project is simple: to program my own `printf()`*, by recreating its behaviour without relying on the original implementation.
- _*The printf function in C is a standard library function used to print formatted output to the console. It is part of the `<stdio.h>` header file and provides a versatile way to display data of various types by using format specifiers._

![approved-+-bonus-🌟-110%](https://github.com/user-attachments/assets/ee04d78a-3b66-439c-b267-64b18174d8e8)
[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)

## Requirements
### 📓 Mandatory
Following the original `printf()`, our version should be able to:
- [x] Accept a format string and a variable number of arguments.
- [x] Handle both plain text and placeholders (format specifiers).
- [x] Output the formatted result to the standard output (stdout).
- [x] Return the total number of characters printed.
And it should be prototyped as below:
```c
int ft_printf(const char *format, ...);
```

### 🌟 Bonus
For the bonus part, our program should be able to accept and interpret flags likewise accepted by the original `printf()` function. I have implemented the following:
- [x] **`#`:** The hashtag flag is used to modify the output to include a prefix **0**, **0x** or **0X**, depending on the specifier input.
- [x] **`+`:** The plus flag forces the output to always include a sign (+ or -) for signed numbers. It ensures positive numbers are explicitly marked with a +, while negative numbers still show the -.
- [x] **` `:** The space flag adds a leading space character for positive numbers, and does nothing for negatives.

## Skills Developed
### Variadic Functions
Variadic functions are central to the ft_printf project because they allow the implementation of flexible functions that accept a variable number of arguments. 
In C, this is achieved using macros provided by the `<stdarg.h>`.

## Usage
An example of how ft_printf might be implemented and used:
```c
#include "ft_printf.h"

int main() {
    int num = 42;
    ft_printf("Hello, World! My favorite number is %d.\n", num);
    return 0;
}
```
Expected Output:
```c
Hello, World! My favorite number is 42.
```
