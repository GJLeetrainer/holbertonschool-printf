#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: Format string containing the characters and the specifiers
 * Return: Number of characters printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	va_start(args, format);
	if (format == NULL)
	{
		return (-1);
	}
	while (*format)
	{
		if (*format == '%') /* Identifica un especificador */
		{
			format++;
			d_terminator_specifier(format, args);/*Determina 'c','s','d','i' */
		}
		else /* Imprime texto literal */
		{
			count += _putchar(*format);
		}
		format++;
	}
	va_end(args);
	return (count + 1); /* Conteo de caracteres (mas 1 por '\0') */
}
