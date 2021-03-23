#include "lists.h"
/**
 * listint_len - Prints all the elements of a list.
 *
 * @h: The number of nodes.
 *
 * Return: The number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
