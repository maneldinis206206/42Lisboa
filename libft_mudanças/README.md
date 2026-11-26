*This project has been created as part of the 42 curriculum by mdinis-d.*

# Libft

## Description

Libft is a C library developed as part of the 42 curriculum. The goal of this project is to recreate a set of functions from the standard C library and implement additional utility functions. It provides an opportunity to develop a better understanding of C programming, memory management, pointers, strings and linked lists.

The library is compiled into `libft.a`, which can then be used in other C projects.

## Features

### Mandatory Part

The mandatory part contains reimplementations of standard C library functions, as well as additional functions.

**Character and string checks**

`ft_isalpha` checks whether a character is an alphabetic letter.  
`ft_isdigit` checks whether a character is a decimal digit.  
`ft_isalnum` checks whether a character is alphanumeric.  
`ft_isascii` checks whether a character belongs to the ASCII character set.  
`ft_isprint` checks whether a character is printable.

**String length and memory operations**

`ft_strlen` returns the length of a string.  
`ft_memset` fills a block of memory with a specified byte.  
`ft_bzero` sets a block of memory to zero.  
`ft_memcpy` copies a specified number of bytes from one memory area to another.  
`ft_memmove` copies bytes between memory areas while handling overlapping regions safely.  
`ft_strlcpy` copies a string into a destination buffer with size limitation.  
`ft_strlcat` appends a string to another string with size limitation.

**Character conversion**

`ft_toupper` converts a lowercase letter to uppercase.  
`ft_tolower` converts an uppercase letter to lowercase.

**String searching and comparison**

`ft_strchr` locates the first occurrence of a character in a string.  
`ft_strrchr` locates the last occurrence of a character in a string.  
`ft_strncmp` compares two strings up to a specified number of characters.  
`ft_strnstr` searches for a substring within a string, limited to a specified length.

**Memory searching and comparison**

`ft_memchr` locates the first occurrence of a byte in a memory block.  
`ft_memcmp` compares two memory blocks.

**Number conversion and memory allocation**

`ft_atoi` converts a string to an integer.  
`ft_calloc` allocates memory for an array and initializes it to zero.  
`ft_strdup` allocates memory and creates a duplicate of a string.

**Additional functions**

`ft_substr` creates a substring from a string, starting at a specified index and with a maximum length.  
`ft_strjoin` creates a new string by joining two strings.  
`ft_strtrim` creates a new string after removing specified characters from the beginning and end.  
`ft_split` splits a string into an array of strings using a delimiter character.  
`ft_itoa` converts an integer into a string.  
`ft_strmapi` applies a function to each character of a string and creates a new string with the results.  
`ft_striteri` applies a function to each character of a string, passing its index and a pointer to the character.  
`ft_putchar_fd` writes a character to a specified file descriptor.  
`ft_putstr_fd` writes a string to a specified file descriptor.  
`ft_putendl_fd` writes a string followed by a newline to a specified file descriptor.  
`ft_putnbr_fd` writes an integer to a specified file descriptor.

###  Linked Lists

The bonus part implements functions for working with singly linked lists.

`ft_lstnew` creates a new list node with the given content.  
`ft_lstadd_front` adds a node to the beginning of a list.  
`ft_lstsize` counts the number of nodes in a list.  
`ft_lstlast` returns the last node of a list.  
`ft_lstadd_back` adds a node or chain of nodes to the end of a list.  
`ft_lstdelone` deletes one node and applies a given function to its content.  
`ft_lstclear` deletes all nodes in a list and applies a given function to each node's content.  
`ft_lstiter` applies a given function to the content of every node in a list.  
`ft_lstmap` creates a new list by applying a function to the content of each node in an existing list.

## Instructions

The library can be compiled using the provided Makefile.

To compile the mandatory part, run:

```bash
make
```

The Makefile also provides the following commands:

```bash
make clean
```
Removes the object files.

```bash
make fclean
```
Removes the object files and the compiled library (`libft.a`).

```bash
make re
```
Rebuilds the library from scratch.

## Resources

The following resources were used during the development of this project:

- **42 Libft Subject:** Used as the main reference for the project requirements and expected behaviour of each function.
- **42 Peers:** Discussions with other students at 42 were an important part of the learning process. They helped clarify concepts, understand function behaviour and solve implementation problems. Most of the help received during the project came from these discussions.
- **Linux manual pages (`man`):** Used to consult the behaviour of standard C library functions and understand their expected use.
- **C documentation:** Used to clarify concepts related to pointers, strings, memory allocation and linked lists.

### Use of AI

AI tools were used as a support resource during development, mainly to clarify C programming concepts, understand the behaviour expected from certain functions, and identify and correct errors found while testing the implementation.

AI was also used to help interpret test results and understand why certain implementations failed. The code was reviewed and tested during development, and the aim was to understand the solutions rather than simply copy them.
