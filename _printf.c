#include "main.h"
/**
 * _printf - simplified version of printf
 * @format: format string
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (!format)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%' && !format[i + 1])
		{
			va_end(args);
			return (-1);
		}
		else if (format[i] == '%' && format[i + 1])
		{
			count += _specifier(format, args, &i);
		}
		else
		{
			count += _putchar(format[i]);
		}
		i++;
	}

	va_end(args);
	return (count);
}
