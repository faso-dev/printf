#include "main.h"

/**
* print_address - prints a pointer
* @p: pointer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_address(void *p)
{
	int count = 0;
	unsigned long int i = (unsigned long int)p;

	_putchar('0');
	_putchar('x');
	count += 2;
	count += print_hexadecimal(i);
	return (count);
}
