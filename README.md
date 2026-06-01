# Libft

Libft is the first project of the 42 curriculum. The goal is to recreate a set of standard C library functions and implement additional utility functions that will be used throughout future projects.

## Features

### Part 1 - Libc Functions
Reimplementation of commonly used functions from the C standard library, including:

- String manipulation
- Memory management
- Character checks and conversions
- String conversion utilities

### Part 2 - Additional Functions
Custom utility functions such as:

- String splitting
- String trimming
- String joining
- String mapping and iteration
- Integer to ASCII conversion

### Part 3 - Additional Functions with linked list
Implementation of a linked list library with functions for:

- Creating and deleting nodes
- Adding nodes to the front or back
- Iterating through lists
- Mapping list contents
- Clearing entire lists

## Compilation

To compile the library:

```bash
make
```

To remove object files:

```bash
make clean
```

To remove object files and the library:

```bash
make fclean
```

To recompile everything:

```bash
make re
```

## Usage

Include the header file in your project:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
gcc main.c -L. -lft
```

## Purpose

This project introduces fundamental concepts of C programming, memory management, and code organization while building a reusable library for future 42 projects.

## Author

andede-s, 05/26
