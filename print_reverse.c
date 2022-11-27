#include "main.h"

/**
* print_reverse - prints a string in reverse
* @s: string
* Return: number of characters printed
*/
int print_reverse(char *s)
{
	int i = 0, count = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
		count++;
	}
	return (count);
}
