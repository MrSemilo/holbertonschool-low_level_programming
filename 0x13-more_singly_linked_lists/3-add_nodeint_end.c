#include "lists.h"
/**
 *  * add_nodeint_end - add  a new node to the beggining of the listint_t.
 * @head: pointer to pointer *head, that point to the structure.
 * @n: element int
 * Return: the numbers of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nwe = NULL;
	listint_t *i = NULL;

	nwe = malloc(sizeof(listint_t));

	if (!nwe)
		return (NULL);

	nwe->n = n;

	if (!*head)
	{
		nwe->next = *head;
		*head = nwe;
	}
	else
	{
	i = *head;

	while (i->next)
		i = i->next;
	i->next = nwe;
	}
	return (nwe);
}

