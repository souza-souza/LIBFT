# libft

*This project has been created as part of the 42 curriculum by andede-s*

## Description

The **libft** project is the first project of the 42 curriculum. Its purpose is to recreate a set of functions from the standard C library, along with additional utility functions, in order to build a reusable static library.

The main objective is to strengthen core C programming skills, including:

- Memory allocation and management  
- String manipulation  
- Pointer handling  
- Implementation of standard algorithms  
- Code modularity and reuse  
- Understanding low-level library behavior  

The final result of this project is a static library (`libft.a`) that will be reused in future 42 projects.

---

## Instructions

### Compilation

To compile the library, run:

```bash
make
```

This will generate:

```text
libft.a
```

To remove object files:

```bash
make clean
```

To remove all generated files:

```bash
make fclean
```

To recompile the project:

```bash
make re
```

---

## Usage

To use the library in a project, include the header file:

```c
#include "libft.h"
```

Compile your program with:

```bash
gcc main.c -L. -lft
```

Alternatively, integrate the library into your own Makefile.

---

## Library

### Purpose

The purpose of this library is to reproduce standard C library functions and provide additional utility functions commonly used in C projects.  
This helps to better understand their internal implementation and behavior.

---

### Implemented Functions

#### libc functions

```text
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
```

#### additional functions

```text
ft_calloc
ft_strdup
```

#### bonus (linked list functions)

```text
ft_lstnew
ft_lstadd_front
ft_lstsize
ft_lstlast
ft_lstadd_back
ft_lstdelone
ft_lstclear
ft_lstiter
ft_lstmap
```

---

## Structure

```text
libft/
├── src/
│   ├── libc/
│   ├── extra/
│   └── bonus/
├── include/
│   └── libft.h
├── Makefile
└── libft.a
```

Each module is responsible for:

- Reimplementation of standard C functions  
- Safe memory handling  
- Modular and reusable code design  
- Linked list management (bonus part)  

---

## Resources

- https://man7.org/linux/man-pages/
- https://www.gnu.org/software/libc/manual/
- https://pubs.opengroup.org/onlinepubs/9699919799/
- 42 Libft subject
- C programming documentation

---

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
