#include "main.h"

/**
* _strlen - the function that returns the length of a string.
* @s: the string.
* Return: the length of the string.
*/
int _strlen(const char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

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
			switch (format[i])
			{
				case 'c':
					count += print_char(va_arg(list, int));
					break;
				case 's':
					count += print_string(va_arg(list, char *));
					break;
				case '%':
					count += print_char('%');
					break;
				case 'd':
					count += print_integer(va_arg(list, int));
					break;
				case 'i':
					count += print_unsigned_integer(va_arg(list, int));
					break;
				case 'b':
					count += print_binary(va_arg(list, unsigned int));
					break;
				case 'u':
					count += print_unsigned_integer(va_arg(list, unsigned int));
					break;
				case 'o':
					count += print_octal(va_arg(list, unsigned int));
					break;
				case 'x':
					count += print_hexadecimal(va_arg(list, unsigned int), 0);
					break;
				case 'X':
					count += print_hexadecimal(va_arg(list, unsigned int), 1);
					break;
				case 'S':
					count += print_string_non_printable(va_arg(list, char *));
					break;
				case 'r':
					count += print_reverse(va_arg(list, char *));
					break;
				case 'R':
					count += print_rot13(va_arg(list, char *));
					break;
				case 'p':
					count += print_address(va_arg(list, void *));
					break;
				default:
					count += print_char('%');
					count += print_char(format[i]);
					break;
			}
		}
		else
		{
			count += print_char(format[i]);
		}
	}
	va_end(list);
	return (count);
}

