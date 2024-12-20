#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

int _printf(const char *format, ...);
int _putchar(char c);
int d_terminator_specifier(const char *format, va_list args);
int do_c(va_list args);
int do_s(va_list args);
int do_di(va_list args);
int do_u(va_list args);
int do_o(va_list args);
int do_p(va_list args);
int do_x(va_list args, int is_upper);
void transform_base(unsigned int num, int base, char *buffer, int is_upper);

#endif
