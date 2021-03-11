#include "function_pointers.h"

/**
 * array_iterator - print array in Hexadecimal and Integer
 * @array: collection of elements of the type same
 * @size: size of the array
 * @action: name function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!action)
		return;
	if (!array)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
