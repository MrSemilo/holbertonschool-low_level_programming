#include "lists.h"
/**
 *add_dnodeint - Prototype.
 *@head: head.
 *@n: node.
 *Return: add.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *add;

if (head == NULL)
return (0);

add =  malloc(sizeof(dlistint_t));
if (add == NULL)
return (0);

add->prev = NULL;
add->n = n;
add->next = *head;

if (*head != NULL)
(*head)->prev = add;

*head = add;
return (add);
}
