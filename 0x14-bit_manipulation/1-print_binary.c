#include <stdio.h>
#include <string.h>
/**
 * print_binary - prototype
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	if ((n & 1) == 1)
		printf("1");

	else
		printf("0");
}

