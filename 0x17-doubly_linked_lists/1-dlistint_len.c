#include "lists.h"
/**
 * dlistint_len - Prototype.
 * @h: head.
 * Return: count.
 */

size_t dlistint_len(const dlistint_t *h)
{
int count = 0;

if (h == NULL)
return (0);
while (h)
{
h = h->next;
count++;
}
return (count);
}
