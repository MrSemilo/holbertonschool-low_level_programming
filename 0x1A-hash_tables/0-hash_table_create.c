#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array
 *
 * Return: new_hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	if (size == 0)
	{
		return (NULL);
	}

	new_hash = malloc(sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		return (NULL);
	}
	new_hash->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hash == NULL)
		return (NULL);

	new_hash->size = size;

	return (new_hash);
}
