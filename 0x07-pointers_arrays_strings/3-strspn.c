#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: string
 * Return: i
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, e, i;

	i = 0; /*i is the characters compared*/

	for (a = 0; s[a]; a++)
	{
		for (e = 0; accept[e] != '\0'; e++)
		{
			if (s[a] == accept[e])
			{
				i++;
				break;
			}
		}
		if (accept[b] != s[a])
		{
			break;
		}
	}
	return (i);
}
