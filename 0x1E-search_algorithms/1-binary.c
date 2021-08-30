  #include <stdio.h>
#include <stdlib.h>

/**
* binary_search - prototype
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: The index found or -1 if failed
*/

int binary_search(int *array, size_t size, int value)
{
	int r = size - 1;
	int l = 0;
	int tmp;

	if (array)
	{
		while (l <= r)
		{
			printf("Searching in array: ");
			for (tmp = l; tmp < r; tmp++)
				printf("%d, ", array[tmp]);
			printf("%d\n", array[tmp]);
			tmp = l + (r - l) / 2;
			if (array[tmp] == value)
				return (tmp);
			if (array[tmp] < value)
				l = tmp + 1;
			else
				r = tmp - 1;
		}
	}
	return (-1);
}
