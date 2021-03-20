#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwe;
	unsigned int len = 0;

	if (!head || !str)
		return (NULL);

	nwe = malloc(sizeof(list_t));

	if (!nwe)
		return (NULL);

	while (str[len] != '\0')
		len++;
        
	nwe->str = strdup(str);
	nwe->len = len;
	nwe->next = *head;
	*head = nwe;
	return (nwe);
}
