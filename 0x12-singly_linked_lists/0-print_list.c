#include "lists.h"
/**
 * print_list - Prints all the elements of a list.
 *
 * @h: The number of nodes.
 *
 * Return: The number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	if (h == 0)
	return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		i++;
	}
	return (i);
}
