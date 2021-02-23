#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array to be printed
 * @size: size of a
 */
void print_diagsums(int *a, int size)
{
	int e, i, sum = 0;

	for (e = 0; e < size; e++)
		sum += *(a + e * size + e);
	printf("%i, ", sum);
	sum = 0;
	for (i = 0; i < size; i++)
		sum += *(a + size * (i + 1) - (i + 1));
	printf("%i\n", sum);
}
