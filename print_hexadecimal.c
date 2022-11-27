#include "main.h"

/**
* print_hexadecimal - prints a hexadecimal
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_hexadecimal(unsigned int i)
{
	int count = 0;

	if (i > 15)
		count += print_hexadecimal(i / 16);
	if ((i % 16) < 10)
		_putchar((i % 16) + '0');
	else
		_putchar((i % 16) + 'a' - 10);
	count++;
	return (count);
}

/**
* print_hexadecimal_uppercase - prints a hexadecimal in uppercase
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_hexadecimal_uppercase(unsigned int i)
{
	int count = 0;

	if (i > 15)
		count += print_hexadecimal_uppercase(i / 16);
	if ((i % 16) < 10)
		_putchar((i % 16) + '0');
	else
		_putchar((i % 16) + 'A' - 10);
	count++;
	return (count);
}