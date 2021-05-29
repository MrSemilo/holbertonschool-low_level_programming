#include "hash_tables.h"

/**
 * hash_table_set - Prototype
 * @ht: the hash table
 * @key: the key
 * @value: the value associated
 *
 * Return: 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_, *tmp_;
	unsigned int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp_ = ht->array[index];

	while (tmp_)
	{
		if (strcmp(tmp_->key, key) == 0)
		{
			free(tmp_->value);
			tmp_->value = strdup(value);

			return (1);
		}
		tmp_ = tmp_->next;
	}

	new_ = malloc(sizeof(hash_node_t));
	if (new_ == NULL)
		return (0);

	new_->key = strdup(key);
	new_->value = strdup(value);
	new_->next = ht->array[index];
	ht->array[index] = new_;

	return (1);
}
