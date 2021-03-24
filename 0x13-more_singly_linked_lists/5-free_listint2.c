#include "lists.h"
/**
 * free_listint2- free a listint_t list.
 * @head: pointer to pointer the first element of listint_t.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *nwe;

	if (head)
	{
		while (*head)
		{
			nwe = (*head)->next;
			free(*head);
			*head = nwe;
		}
		(*head) = NULL;
	}
}
