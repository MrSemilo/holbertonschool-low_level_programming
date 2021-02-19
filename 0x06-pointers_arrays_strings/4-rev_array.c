#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i;
	int longitud;

	for (x = 0; x < longitud / 2; x++)
	{
		i = a[x];
		a[x] = a[longitud - 1];
		n[longitud - 1] = i;
		logitud--;
	}
}
