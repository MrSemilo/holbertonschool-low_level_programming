#include "holberton.h"
#include <stddef.h>

/**
 * _strpbrk - This is my function
 * @s: This is my entry
 * @accept: This is my second entry
 * Return: This is my return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, e;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (accept[e] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (NULL);
}
