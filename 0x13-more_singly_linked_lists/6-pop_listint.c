#include "lists.h"
/**
 * pop_listint- delet the head node of a listint_t list.
 * @head: pointer to pointer the head pointer.
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *nwe;
	int n;

	n = (*head)->n;
	if (*head == NULL)
		return (0);

	nwe = (*head)->next;
	free(*head);
	*head = nwe;

	return (n);
}
