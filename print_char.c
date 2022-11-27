#include "main.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_char - prints a character
* @c: character
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_char(char c)
{
	_putchar(c);
	return (1);
}
