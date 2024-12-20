#include "main.h"

/**
 * do_p - Does %p specifier to print addresses.
 * @args: The list of arguments.
 *
 * Return: The number of characters printed.
 */
int do_p(va_list args)
{
	unsigned long address = (unsigned long)va_arg(args, void*);
	char buffer[20];  /* Enough for 16-digit hex + "0x" */
	int count = 0;
	int i;

	/* Convert the address to hexadecimal (lowercase) */
	transform_base(address, 16, buffer, 0);

	/* Print the "0x" prefix */
	count += _putchar('0');
	count += _putchar('x');

	/* Print the address in hexadecimal */
	for (i = 0; buffer[i] != '\0'; i++)
	{
		count += _putchar(buffer[i]);
	}
	return (count);
}
