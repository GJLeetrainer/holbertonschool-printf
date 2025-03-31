#include "main.h"

/**
 * _specifier - handles format specifiers for _printf
 * @format: the format string
 * @args: va_list of arguments
 * @i: pointer to the current index in the format string
 * Return: number of characters printed
 */
int _specifier(const char *format, va_list args, int *i)
{
	int count = 0;

	(*i)++;

	if (format[*i] == 'd' || format[*i] == 'i')
	{
		count += print_int(va_arg(args, int));
	}
	else if (format[*i] == 'c')
	{
		count += _putchar(va_arg(args, int));
	}
	else if (format[*i] == 's')
	{
		char *str = va_arg(args, char *);
		int j = 0;

		if (!str)
			str = "(null)";
		while (str[j])
		{
			count += _putchar(str[j]);
			j++;
		}
	}
	else if (format[*i] == '%')
	{
		count += _putchar('%');
	}
	else
	{
		count += _putchar('%');
		count += _putchar(format[*i]);
	}

	return (count);
}

