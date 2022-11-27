#include "main.h"

/**
* print_binary - prints a binary
* @i: integer
* Return: number of characters printed
*/
int print_binary(unsigned int i)
{
	int count = 0;

	if (i > 1)
		count += print_binary(i >> 1);
	_putchar((i & 1) + '0');
	count++;
	return (count);
}
