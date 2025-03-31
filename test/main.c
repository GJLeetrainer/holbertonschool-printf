#include "../main.h"
#include <stdio.h>

int main(void)
{
int count;
int a = 13567;
int b = -2223;

count = _printf("hola %c mundo!!!!!\n", 's');
printf("cadddddddddddddddddddddracteres impresos por _printf: %d\n", count);

_printf("Número positivo con %%d: %d\n", a);
_printf("Número negativo con %%i: %i\n", b);
printf("Comprobación con printf:\n");
printf("Número positivo: %d\n", a);
printf("Número negativo: %i\n", b);

return (0);
}
