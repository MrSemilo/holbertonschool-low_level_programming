#include "holberton.h"
/*
 * _strcmp - compare two strings.
 * @s1: string 1
 * @s2: string 2
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int u;
	while (s1[i]!='\0' && s2[i]!='\0' && si[i] == s2[i])
	{
		i++;
	}
	u = s1[i] - s2[i];
	return (u);
}
