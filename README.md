# holbertonschool-printf
# **Printf Project**

## **Table of Content**
1. **Project Overview**
2. **Purpose**
3. **Main Features**
4. **Supported Specifiers**
5. **Compilation Instructions**
6. **Language**
7. **Contributors**

---

## **Project Overview**

The **Printf Project** is a implementation of the standard C library function `printf`. This project aims to mimic the behavior of `printf` by handling specific format specifiers while also giving developers insights into **variadic functions** and low-level system calls.

---

## **Purpose**

The purpose of this project is:

- **Strengthen understanding** of C programming concepts such as variadic functions, memory allocation, and system calls.
- **Build a foundational understanding** of how standard library functions are implemented.

---

## **Main Features**

- **Custom implementation** of the `printf` function.
- **Support** for a subset of `printf` conversion specifiers.
- **Extensive testing** to ensure reliability and consistency.

---

## **Supported Specifiers**

### **What is a format specifier?**

A format specifier is a special sequence of characters used in formatted input and output functions (like `printf`, `scanf`) to define how data should be formatted and displayed or read.

| **Format Specifier** | **Description**                    | **Example Output**   |
|-----------------------|------------------------------------|-----------------------|
| `%c`                 | Prints a single character         | Input: `%c` -> H     |
| `%s`                 | Prints a string of characters     | Input: `%s` -> Hello |
| `%%`                 | Prints a literal `%` character    | Input: `%%` -> %     |
| `%d`                 | Prints a signed decimal integer   | Input: `%d` -> 42    |
| `%i`                 | Prints a signed integer (identical to `%d`) | Input: `%i` -> 42 |

---
+
## **Compilation Instructions**

All the files that were used are compiled using:  

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

---

## **Language**

The creation of the `printf()` function is being done using the **C programming language**.

---

## **Contributors**

- **Jaylee Velez** - [github](https://github.com/GJLeetrainer)
- **Andres Mora** - [github](https://github.com/afmorac)

Repository:[github](https://github.com/GJLeetrainer/holbertonschool-printf.git)
