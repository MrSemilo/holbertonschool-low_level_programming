#include <stdio.h>
#include "holberton.h"
/**
* rev_string - Function
* @s: parameter
* Return: void
*/
void rev_string(char *s)
{
char log;
int i = 0;
int u = 0;
if (s[0] == '\0')
{
s = "\0";
}
else
{
u = (_strlen(s) - 1);
while (i < u)
{
log = s[i];
s[i] = s[u];
s[u] = log;
i++;
u--;
}
}
}
/**
* _strlen - Function
* @s: parameter
* Return: i
*/

int _strlen(char *s)
{
	int x = 1;

	if (s[0] == '\0')
	{
		x = 0;
	}
	else
	{
		while (s[x] != '\0')
		{
			x++;
		}
	}
	return (x);
}
