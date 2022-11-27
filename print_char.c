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
*/
int print_char(char c)
{
	_putchar(c);
	return (1);
}

/**
* _strlen - the function that returns the length of a string.
* @s: the string.
* Return: the length of the string.
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
