#include "main.h"

/**
* print_string - prints a string
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_string(char *s)
{
	int i = 0;

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}

/**
* print_string_non_printable - prints the non printable characters of a string
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_string_non_printable(char *s)
{
	int i, j, count = 0;
	char *hex = "0123456789abcdef";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			count += 2;
			for (j = 0; j < 2; j++)
			{
				_putchar(hex[(s[i] >> (4 * (1 - j))) & 0xf]);
				count++;
			}
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}