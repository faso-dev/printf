#include "main.h"

/**
* print_float - prints a float
* @f: float
* Return: number of characters printed
*/
int print_float(float f)
{
	int i, count = 0;
	unsigned int n;

	if (f < 0)
	{
		_putchar('-');
		count++;
		f = -f;
	}
	n = (unsigned int)f;
	count += print_integer(n);
	_putchar('.');
	count++;
	f -= n;
	for (i = 0; i < 6; i++)
	{
		f *= 10;
		n = f;
		_putchar(n + '0');
		count++;
		f -= n;
	}
	return (count);
}
