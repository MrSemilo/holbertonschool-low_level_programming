#include "lists.h"
/**
 * free_listint- free a listint_t list.
 * @head: pointer to pointer the first element of listint_t.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *nwe = NULL;

	while (head != '\0')
	{
		nwe = head->next;
		free(head);
		head = nwe;
	}
}
