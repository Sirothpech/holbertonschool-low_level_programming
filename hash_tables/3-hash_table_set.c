#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 * Return: 1 success or 0 fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *ptr;

	if (!ht || !*key)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = NULL;

	if (ht->array[index])
		ptr = ht->array[index];
	else
		ptr = NULL;

	while (ptr)
	{
		if (!strcmp(ptr->key, key))
		{
			ptr->value = strdup(value);
			free(new_node);
			return (1);
		}
		ptr = ptr->next;
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
