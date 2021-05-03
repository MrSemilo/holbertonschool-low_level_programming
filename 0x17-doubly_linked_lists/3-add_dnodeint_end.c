#include "lists.h"
/**
 * add_dnodeint_end - Prototype.
 * @head: head.
 * @n: node.
 * Return: count.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *_node, *new_node;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;

_node = *head;

if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}

while (_node->next != NULL)
{
_node = _node->next;
}

_node->next = new_node;
new_node->prev = _node;

return (new_node);
}
