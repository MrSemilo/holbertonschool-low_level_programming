#include "lists.h"
/**
 *free_list - function that frees a list_t list.
 * @head: Pointed to head of a list
 *
 * Return: Void
 */


void free_list(list_t *head)
{
list_t *nwe = head;

	list_t *next = NULL;

	for (; nwe != NULL; nwe = next)
	{
		next = nwe->next;
		free(nwe->str);
		free(nwe);
	}

}
