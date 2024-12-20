#include "main.h"

/**
 * do_x - Does the %x and %X specifiers for hexadecimal numbers.
 * @args: The list of arguments.
 * @is_upper: Flag, determines hexa case (1=uppercase, 0=lowercase).
 *
 * Return: The number of characters printed.
 */

int do_x(va_list args, int is_upper)
{
	unsigned int num = va_arg(args, unsigned int);
	char buffer[20];
	int count = 0;
	int i = 0;

	transform_base(num, 16, buffer, is_upper);

	for (i = 0; buffer[i] != '\0'; i++)
		count += _putchar(buffer[i]);

	return (count);
}
