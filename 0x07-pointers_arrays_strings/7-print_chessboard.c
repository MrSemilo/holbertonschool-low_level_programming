#include <stdio.h>
#include "holberton.h"

/**
* print_chessboard - Function
* @a: parameter
* Return: void
*/

void print_chessboard(char (*a)[8])
{
	int e, i;

	e = 0;
	i = 0;

	for (i = 0; i < 8; i++)
	{
		for (e = 0; e < 8; e++)
		{
			_putchar(a[i][e]);
		}
		_putchar('\n');
	}
}
