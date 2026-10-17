*This project has been created as part of the 42 curriculum by ojamleh.*

# Libft

## Description

Libft is my first project at 42: a personal C library that re-implements a set of standard `libc` functions and adds extra utility functions. Instead of rewriting the same helpers in every project, I compile them once into a static library (`libft.a`) and link it into later projects.

The library covers:

- **Character checks and conversion**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`
- **String handling**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_strcat`
- **Memory handling**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
- **Conversion**: `ft_atoi`, `ft_itoa`
- **Additional string functions**: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri`
- **File descriptor output**: `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`
- **Linked lists (bonus)**: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Linked lists use the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

## Instructions

### Installation

Clone the repository and move into it:

```bash
git clone <repository-url> libft
cd libft
```

### Compilation

Run these commands in the root directory:
1- make: compiles the library and creates `libft.a`
2- make clean: Removes the object files (`.o`)
3- make fclean: Removes the object files and libft.a
4- make re: uses fclean and then recompiles the library

### Usage

Include the header in your source file:

```c
#include "libft.h"
```

Then compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c libft.a -I. -o my_program
./my_program
```

`-I.` tells the compiler where to find `libft.h`, so adjust the path if your header is somewhere else.

## Resources

- [Linked Lists in C (GeeksforGeeks)](https://www.geeksforgeeks.org/c/linked-list-in-c/): helped me understand how linked lists work.
- [GNU Make Manual](https://www.gnu.org/software/make/manual/make.html): helped me write my Makefile.
- [What is a README.md file (GeeksforGeeks)](https://www.geeksforgeeks.org/git/what-is-readme-md-file/): helped me structure this README.

### Use of AI

AI was used as a learning aid for the concepts I found hardest, namely **linked lists** and **Makefiles**. It helped explain how they work, and I wrote and tested the code myself.