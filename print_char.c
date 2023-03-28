#include "main.h"

/**
 * print_char - A function that prints a character
 * @args: list of arguments passed as Va_list to the characters
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
