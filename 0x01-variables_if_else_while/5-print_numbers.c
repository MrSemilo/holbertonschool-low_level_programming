#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Imprimir abecadario con letras mayusculas
 * Return: 0 for success
 */
int main(void)
{
char ch = '0';

for (ch = '0'; ch <= '9'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
