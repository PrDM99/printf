#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to a format
 * @format: a character string composed of zero or more directives
 *
 * Return: length of output
 */
int _printf(const char *format, ...)
{
	va_list args;

	print_specifier specifier[] = {
		{"c", print_char},
		{"i", print_int},
		{"d", print_int},
		{"s", print_string},
		{"r", print_rev_string},
		{"R", print_rot13_string},
		{"b", print_dec_binary},
		{"u", print_unsigned_int},
		{"o", print_oct},
		{"x", print_hex},
		{"X", print_HEX},
		{'\0', NULL}
	};
	int size_spec = sizeof(specifier) / sizeof(specifier[0]) - 1;
	int size = 0;
	int b = 0, p = 0;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (int b = 0; format[b] != '\0'; b++)
	{
		if (format[b] == '%')
		{
			b++;

			int p;

		for (p = 0; p < size_spec && format[b] != specifier[p].symbol[0];
		p++);

			if (format[b] == '\0')
				return (-1);
			else if (format[p] == '%')
			{
				_putchar('%');
				size += 1;
			}
			else if (p < size_spec)
			{
				size += specifier[p].print(args);

				if (size == -1)
					return (-1);
			}
			else
			{
				_putchar('%');
				_putchar(format[b]);
				size += 1;
			}
		}
		else
		{
			_putchar(format[b]);
			size += 1;
		}
	}

	va_end(args);

	return (size);
}
