#include "main.h"

/**
 * print_rev_string - prints a string in reverse
 * @args: list of arguments pointing to string
 *
 * Return: length of string
 */

int print_rev_string(va_list args)
{
	char *str;
	int len = 0;
	int count = 0;

	str = va_arg(args, char *);

	if (str == NULL)
		return (-1);

	for (; *(str + len) != '\0'; len++)
		;

	for (; len >= 0; --len)
	{
		_putchar(*(str + len));
		count++;
	}

	return (count);
}
