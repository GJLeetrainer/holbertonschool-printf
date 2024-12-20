#include "main.h"

/**
 * do_o - Does the %o specifier for octal numbers.
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */

int do_o(va_list args)

{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int count = 0;
	int i = 0;

	transform_base(num, 8, buffer, 0);
	for (i = 0; buffer[i] != '\0'; i++)
		count += _putchar(buffer[i]);

	return (count);
}

