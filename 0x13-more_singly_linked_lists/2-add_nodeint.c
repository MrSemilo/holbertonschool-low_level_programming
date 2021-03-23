#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * @head: linked list data structure header
 * @n: value of new node
 * Return: number of nodes
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nwe;

	if (!head)
		return (NULL);

	nwe = malloc(sizeof(listint_t));

	if (!nwe)
		return (NULL);

	nwe->n = n;
	nwe->next = *head;
	*head = nwe;
	return (nwe);
}
