#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocated memory
 * @b: integer.
 * Return: ptr or exit 98.
 *
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	else
		return (i);
}
