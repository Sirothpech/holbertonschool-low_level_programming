#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node, *next;

	if (!ht)
		return;

	for (index = 0; index < ht-> size; index++)
	{
		node = ht->array[index];

		while (node)
		{
			next = node->next;
			if (node->value)
				free(node->value);
			if(node->key)
				free(node->key);
			free(node);
			node = next;
		}
	}

	free(ht->array);
	free(ht);
}
