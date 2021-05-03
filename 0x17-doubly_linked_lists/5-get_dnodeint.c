#include "lists.h"
/**
 * get_dnodeint_at_index - Prototype.
 * @index: head of a list.
 * @head: head.
 * Return: head.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t count = 0;
  
while (count < index && head != NULL)
{
head = head->next;
count++;
}
return (head);
}
