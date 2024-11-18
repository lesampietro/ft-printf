# ft-printf | 42
>Because `ft_putnbr()` & `ft_putsrt()` are not enough.
## Project Overview
The goal of this project is simple: to program my own `printf()`*, by recreating its behaviour without relying on the original implementation, unsing variadic functions. 
- _*The printf function in C is a standard library function used to print formatted output to the console. It is part of the <stdio.h> header file and provides a versatile way to display data of various types by using format specifiers._

![approved-+-bonus-🌟-110%](https://github.com/user-attachments/assets/ee04d78a-3b66-439c-b267-64b18174d8e8)
[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)

## Requirements
### 📓 Mandatory
Following the original `printf()`, our version should be able to:
- [x] Accept a format string and a variable number of arguments.
- [x] Handle both plain text and placeholders (format specifiers).
- [x] Output the formatted result to the standard output (stdout).
- [x] Return the total number of characters printed.
### 🌟 Bonus

## Usage
```c
int ft_printf(const char *format, ...);
