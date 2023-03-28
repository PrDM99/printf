#include "main.h"

/**
 * print_char - A function that prints a character
 * @args: list of arguments pointing to character
 *
 * Return: length of character
 */

int print_char(va_list args)
{
	char b;

	b = va_arg(args, int);

	_putchar(b);

	return (1);
}
