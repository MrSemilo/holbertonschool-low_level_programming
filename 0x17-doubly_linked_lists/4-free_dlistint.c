#include "lists.h"

/**
 * free_dlistint - Prototype.
 * @head: head.
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *_node = NULL;

while (head != NULL)
{
_node = head->next;
free(head);
head = _node;
}
}
