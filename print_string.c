#include "main.h"

/**
* print_string - prints a string
* @s: string
* Return: number of characters printed
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
