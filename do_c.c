#include "main.h"

/**
 * do_c - Does the %c format specifier for characters.
 * @args: The list of variable arguments passed to _printf.
 *
 * Return: The number of characters printed.
 */
int do_c(va_list args)
{
	int count = 0;
	char c = va_arg(args, int);

	if (c == 0)
	{
		c = '0';
		count += _putchar(c);
		return (0);
	}
	count += _putchar(c);

	return (count);
}
