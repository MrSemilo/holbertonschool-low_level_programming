#include <holberton.h>
/**
 * swap_int - void swap
 * @a: variable
 * @b: variable
 */
void swap_int(int *a, int *b)
{
	int rever;

	rever = *a;
	*a = *b;
	*b = rever;
}
