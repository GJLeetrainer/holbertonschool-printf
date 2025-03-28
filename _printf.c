#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - imprime texto formateado
 * @format: string con texto y formatos (%c, %s, etc.)
 * Return: número de caracteres impresos
 */

int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0;
char c;

va_start(args, format);

while (format && format[i])
{
if (format[i] == '%' && format[i + 1] == 'c')
{
c = va_arg(args, int);
write(1, &c, 1);
count++;
i += 2;
}
else
{
write(1, &format[i], 1);
count++;
i++;
}
}

va_end(args);
return (count);
}
