#include "main.h"

/**
* print_octal - prints an octal
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_octal(unsigned int i)
{
	int count = 0;

	if (i > 7)
		count += print_octal(i / 8);
	_putchar((i % 8) + '0');
	count++;
	return (count);
}
