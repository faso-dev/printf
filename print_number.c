#include "main.h"

/**
* print_unsigned_integer - prints an unsigned integer
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_unsigned_integer(unsigned int i)
{
	int count = 0;

	if (i > 9)
		count += print_unsigned_integer(i / 10);
	_putchar((i % 10) + '0');
	count++;
	return (count);
}

/**
* print_integer - prints an integer
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_integer(int i)
{
	int count = 0;

	if (i < 0)
	{
		_putchar('-');
		count++;
		i *= -1;
	}
	count += print_unsigned_integer(i);
	return (count);
}
