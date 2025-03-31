#include "main.h"
#include <stdarg.h>
#include <unistd.h>

/**
 * _printf - imprime texto formateado
 * @format: string con texto y formatos (%c, %s, etc.)
 * Return: número de caracteres impresos
 * P. group : Jaylee Velez & Andres Mora
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
else if (format[i] == '%' && format[i + 1] == 's')
{
char *str = va_arg(args, char *);
int j = 0;
while (str[j])
{
write(1, &str[j], 1);
count++;
j++;
}
i += 2;
}
else if ((format[i] == '%' && format[i + 1] == 'd') ||
(format[i] == '%' && format[i + 1] == 'i'))
{
int num = va_arg(args, int);
count += print_number(num);
i += 2;
}
else if (format[i] == '%' && format[i + 1] == '%')
{
write(1, "%", 1);
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
/**
 * Print numbers
 */

int print_number(int n)
{
int count = 0;
unsigned int num;
char digit;
if (n < 0)
{
write(1, "-", 1);
count++;
num = -n;
}
else
{
num = n;
}
if (num / 10)
count += print_number(num / 10);

digit = (num % 10) + '0';
write(1, &digit, 1);
count++;

return (count);
}
