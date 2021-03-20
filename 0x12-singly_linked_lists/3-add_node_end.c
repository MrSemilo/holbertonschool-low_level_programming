#include "lists.h"
/**
 * add_node_end - function that adds a new node
 * @head: linked list data structure header
 * @str: value of new node
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nwe, *i;
	int len = 0;

	if (!head || !str)
		return (NULL);
	i = *head;
	nwe = malloc(sizeof(list_t));

	if (!nwe)
		return (NULL);

	while (str[len])
		len++;

	nwe->str = strdup(str);
	nwe->len = len;

	nwe->next = NULL;
	if (*head == NULL)
	{
		*head = nwe;
		return (nwe);
	}
	while (i->next)
		i = i->next;
	i->next = nwe;
	return (nwe);
}
