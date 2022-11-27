#include "main.h"

/**
* print_reverse - prints a string in reverse
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
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