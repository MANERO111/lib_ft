*This project has been created as part of the 42 curriculum by aakioud.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The goal is to recreate standard C library functions and implement additional utility functions to develop a deeper understanding of memory management, strings, data manipulation, and linked lists.

The resulting `libft.a` static library can be reused in future C projects.

## Instructions

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <repository_url>
cd libft
```

Compile the library:

```bash
make
```

This generates the `libft.a` static library.

Available Makefile rules:

| Command | Description |
|---|---|
| `make` | Compile the library |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and the library |
| `make re` | Clean and rebuild the library |

The project is compiled using `cc` with the flags `-Wall -Wextra -Werror`.

### Usage

Include `libft.h` in your source file and link against `libft.a`.

Example:

```c
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello, Libft!\n", 1);
    return (0);
}
```

Compile the program:

```bash
cc main.c libft.a -o program
```

Run it:

```bash
./program
```

## Library Contents

The library is organized into the following categories:

- **Character checks and conversions:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`.
- **Memory functions:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`.
- **String functions:** `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strlcpy`, `ft_strlcat`, `ft_strnstr`, `ft_strdup`, `ft_atoi`.
- **Additional functions:** `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`.
- **File descriptor functions:** `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.
- **Linked-list functions:** `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

All functions are declared in `libft.h`. The linked-list functions use the `t_list` structure defined in the library header.

## Resources

- [GeeksforGeeks — Introduction to C](https://www.geeksforgeeks.org/c/c-language-introduction/)
- [W3Schools — Introduction to C](https://www.w3schools.com/c/c_intro.php)
- [YouTube — C programming tutorials](https://www.youtube.com/)

### AI Usage

AI tools were used as learning assistants to clarify C concepts, review code, discuss edge cases, and understand function behavior. Implementation decisions and code were reviewed during development to improve understanding and correctness.