#include <stdio.h>
#include <stdlib.h>

/**
* linear_search - prototype
* @array: is a pointer to the first element of the array to search in
* @size: is the number of elements in array
* @value: is the value to search for
* Return: The index found or -1 if failed
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i; /**Variables contadoras del ciclo.*/

	if (array == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++) /**es menor y no menor igual*/
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
