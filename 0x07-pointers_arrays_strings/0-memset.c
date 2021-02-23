#include "holberton.h"

/**
 * _memset - This is my function
 * @i: This is my entry and return
 * @b: This is the character to copy
 * @n: This is the number of Bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i

	for(i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
