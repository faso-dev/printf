### C printf

The `printf` function is a function that prints formatted output to stdout. The
function is defined in the `stdio.h` header file.

The `printf` function is a variadic function. A variadic function is a function
that takes a variable number of arguments. The `printf` function takes a
variable number of arguments. The first argument is a format string. The format
string is a string that contains zero or more conversion specifiers. The
conversion specifiers are replaced by the values of the arguments that follow
the format string.

### Todo

In this project, we will recreate the `printf` function. We will use the
`_printf` function name instead of `printf` to avoid conflicts with the standard
library `printf` function.

### Requirements

- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with `gcc 4.8.4` using the flags
  `-Wall -Werror -Wextra and -pedantic`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using
  [betty-style.pl]
- No more than 5 functions per file
- You are allowed to use only theses standard library functions:
  `write`, `malloc`, `free`, `va_start`, `va_end`, `va_copy`, `va_arg`
- You are allowed to use the following macros: `va_start`, `va_end`,
  `va_copy`, `va_arg`
- You are allowed to use the following structures: `va_list`

### Compilation

Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c
```

### Testing

Your code will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -Wno-format *.c
```

and tested with the following main files:

- [main.c]

```c
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    _printf("Let's try to printf a simple sentence.\n");
    return (0);
}
```
