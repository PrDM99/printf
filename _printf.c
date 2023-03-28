#include "main.h"

/**
 * _printf - Receives the main string and all the necessary parameters to
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
{

va_list = args;

prints specifiers [] = {
		{"d", print_int},
		{"i", print_int},
		{"c", print_char},
		{"s", print_string},
		{"b", print_binary},
		{"u", print_unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"r", print_rev_string},
		{"R", print_rot13},
		{NULL, NULL},
	};
	va_list args;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	size_spec = sizeof(specifier) / sizeof(specifier[0]);
	size_spec -= 1;
	va_end(args);
	return (size_spec);
}
