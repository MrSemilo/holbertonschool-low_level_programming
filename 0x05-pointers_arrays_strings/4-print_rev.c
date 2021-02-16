#include "holberton.h"
/**
 * print_rev - This function prints reverse
 *
 * @s: This is the new entry
 */
void print_rev(char *s)
{
	int str, a;

	for (a = 0; s[a] != '\0'; a++)
	{
		str = a;
	}
	for (; s[str] != '\0'; str--)
	{
		_putchar(s[str]);
	}
	_putchar('\n');
}
