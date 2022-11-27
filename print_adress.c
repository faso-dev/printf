#include "main.h"

/**
* print_address - prints a pointer
* @p: pointer
* Return: number of characters printed
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
