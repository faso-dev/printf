#include "main.h"


/**
* _printf - the function that produces output according to a format.
* @format: the format string.
* Return: the number of characters printed.
*/
int _printf(const char *format, ...)
{
	va_list list;
	int i, count = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
		 	count += _get_print_func(format[i])(list);
		}
		else
		{
			count += print_char(format[i]);
		}
	}
	va_end(list);
	return (count);
}

