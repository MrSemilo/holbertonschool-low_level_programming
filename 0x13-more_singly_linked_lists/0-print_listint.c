#include "lists.h"
/**
 * print_listint - Prints all the elements of a list.
 *
 * @h: The number of nodes.
 *
 * Return: The number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
