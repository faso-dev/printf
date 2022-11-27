#ifndef MAIN_H
#define MAIN_H

#include "stdarg.h"

/**
* _putchar - writes the character c to stdout
* @c: The character to print
* Return: On success 1.
*/
int _putchar(char c);

/**
* _printf - prints anything to stdout
* @format: format string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
*/
int _printf(const char *format, ...);

/**
* print_char - prints a character
* @c: character
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_char(char c);

/**
* print_string - prints a string
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_string(char *s);

/**
* print_string_non_printable - prints the non printable characters of a string
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_string_non_printable(char *s);

/**
* print_integer - prints an integer
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_integer(int i);

/**
* print_unsigned_integer - prints an unsigned integer
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_unsigned_integer(unsigned int i);

/**
* print_octal - prints an octal
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_octal(unsigned int i);

/**
* print_hexadecimal - prints a hexadecimal
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_hexadecimal(unsigned int i);

/**
* print_hexadecimal_uppercase - prints a hexadecimal in uppercase
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_hexadecimal_uppercase(unsigned int i);

/**
* print_binary - prints a binary
* @i: integer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_binary(unsigned int i);

/**
* print_reverse - prints a string in reverse
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_reverse(char *s);

/**
* print_rot13 - prints a string in rot13
* @s: string
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_rot13(char *s);

/**
* print_address - prints a pointer
* @p: pointer
* Return: number of characters printed
* Return: the number of characters printed (excluding the null byte used to
* end output to strings)
*/
int print_address(void *p);


#endif



