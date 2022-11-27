#include "main.h"

/**
* _get_print_func - gets the print function
* @c: character
* Return: pointer to the print function
*/
int (*_get_print_func(char c))(va_list)
{
	int i = 0;
	print_t print[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hexadecimal},
		{"X", print_hexadecimal_uppercase},
		{"S", print_string_non_printable},
		{"r", print_reverse},
		{"R", print_rot13},
		{"p", print_address},
		{"%", print_percent},
		{"f", print_float},
		{NULL, NULL}
	};

	while (print[i].type != NULL)
	{
		if (print[i].type[0] == c)
			return (print[i].f);
		i++;
	}
	return (NULL);
}
