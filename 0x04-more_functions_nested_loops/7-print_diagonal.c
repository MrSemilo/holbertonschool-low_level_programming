#include "holberton.h"
/**
 * print_diagonal - prints straight line n times.
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_diagonal(int n)
{
int i, n;

for (i = 0; i < n; i++)
{
for (u = 0; u < i; u++)
{
_putchar(' ');
}
_putchar(92);
if(i < (n - 1))
_putchar ('\n');
}
_putchar('\n');
}
