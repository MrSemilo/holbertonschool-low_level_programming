#include <stdio.h>

/**
 * print_array - This show the information about array
 * @a: This is the entry array
 * @n: lenght of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", i[b]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
