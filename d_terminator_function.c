#include "main.h"

/**
 * d_terminator_specifier - Processes a single format specifier.
 * @format: The format specifier to handle.
 * @args: The list of arguments for the specifier.
 *
 * Return: The number of characters printed for the specifier.
 */

int d_terminator_specifier(const char *format, va_list args)
{
	int count = 0;

	switch (*format)
	{
		case 'c': /*%c char specifier*/
			count += do_c(args);
			break;
		case 's':
			count += do_s(args); /*String speci*/
			break;
		case 'i':
		case 'd': /*%d & %i num specifier*/
			count += do_di(args);
			break;
		case '%':
			count += _putchar('%'); /*Literal % */
			break;
		case 'u':
			count += do_u(args); /*unsigned speci*/
			break;
		case 'o':
			count += do_o(args); /*Octal speci*/
			break;
		case 'x':
			count += do_x(args, 0); /* Lowercase hexadecimal */
			break;
		case 'X':
			count += do_x(args, 1); /* Uppercase hexadecimal */
			break;
		case 'p':
			count += do_p(args); /*Adresses*/
			break;
		default: /* Unknown specifier */
			count += _putchar('%');
			count += _putchar(*format);
			break;
	}
	return (count);
}
