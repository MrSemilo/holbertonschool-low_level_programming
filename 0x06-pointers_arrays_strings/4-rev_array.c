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
	int log;
	int x;

	x = 0;
	log = n -1;
	while (x < log)
	{
		i = a[x];
		a[x] = a[log];
		a[log] = i;
		x++;
		log--;
	}
}
