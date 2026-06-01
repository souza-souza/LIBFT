*This project has been created as part of the 42 curriculum by andede-s*

# libft

## Description

The **libft** project is the first project of the 42 curriculum. Its purpose is to reimplement a set of functions from the standard C library, along with additional utility functions, in order to create a reusable static library.

This project aims to strengthen fundamental skills in C programming, including:
- Memory allocation and management
- String manipulation
- Pointer handling
- Implementation of standard algorithms
- Code modularity and reuse
- Understanding of low-level library behavior

The output of this project is a static library (`libft.a`) that will be used in future 42 projects.

## Instructions

### Compilation

To compile the library, run:

make

This will generate the file:

libft.a

To remove object files:

make clean

To remove all generated files:

make fclean

To recompile the project:

make re

### Usage

To use the library in a project, include the header file:

#include "libft.h"

Compile your program with:

gcc main.c -L. -lft

Alternatively, integrate the library into your project Makefile.

## Library

### Purpose

The purpose of this library is to reproduce standard C library functions and provide additional utility functions frequently used in C projects. This allows a better understanding of their internal implementation and behavior.

### Implemented Functions

#### libc functions

ft_isalpha  
ft_isdigit  
ft_isalnum  
ft_isascii  
ft_isprint  
ft_strlen  
ft_memset  
ft_bzero  
ft_memcpy  
ft_memmove  
ft_strlcpy  
ft_strlcat  
ft_toupper  
ft_tolower  
ft_strchr  
ft_strrchr  
ft_strncmp  
ft_memchr  
ft_memcmp  
ft_strnstr  
ft_atoi  

#### additional functions

ft_calloc  
ft_strdup  

#### bonus (linked list functions)

ft_lstnew  
ft_lstadd_front  
ft_lstsize  
ft_lstlast  
ft_lstadd_back  
ft_lstdelone  
ft_lstclear  
ft_lstiter  
ft_lstmap  

### Structure

libft/
├── src/
│   ├── libc/
│   ├── extra/
│   └── bonus/
├── include/
│   └── libft.h
├── Makefile
└── libft.a

Each module is responsible for:
- Reimplementation of standard C functions
- Safe memory handling
- Modular and reusable code design
- Linked list management (bonus part)

## Resources

- https://man7.org/linux/man-pages/
- https://www.gnu.org/software/libc/manual/
- https://pubs.opengroup.org/onlinepubs/9699919799/
- 42 Libft subject
- C programming documentation

## AI Usage

AI tools were used during the development of this project for:
- Structuring and formatting documentation
- Improving clarity of explanations
- Assisting in README organization and wording

All content was reviewed and adapted manually. No unverified or unchecked AI-generated code was used.

## Notes

- This project follows the 42 Norm
- No external libraries are used
- Memory leaks and undefined behavior are not allowed
- The library is designed for reuse in future 42 projects
