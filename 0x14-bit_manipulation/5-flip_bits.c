#include "holberton.h"
/**
 * flip_bits - Returns the number.
 * @n: The number.
 * @m: The number to flip to.
 *
 * Return: number of bits to flip from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int prueba = n ^ m, num_bits = 0;

	while (prueba > 0)
	{
		num_bits += (prueba & 1);
		prueba = prueba >> 1;
	}

	return (num_bits);
}
