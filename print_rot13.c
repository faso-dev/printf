#include "main.h"

/**
* print_rot13 - prints a string in rot13
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_rot13(char *s)
{
	int i, j, count = 0;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				count++;
				break;
			}
		}
		if (alpha[j] == '\0')
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
