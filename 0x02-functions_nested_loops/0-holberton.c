#include "holberton.h"
/**
 * main - Prints Holberton as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int str[] = {72, 111, 108, 98, 101, 114, 116, 111, 110};
int coutm, zs;

zs = sizeof(str) / sizeof(int)
for (coutm = 0; coutm < zs; coutm++)
{
_putchar(str[coutm]);
}
_putchar('\n');
return (0);
}
