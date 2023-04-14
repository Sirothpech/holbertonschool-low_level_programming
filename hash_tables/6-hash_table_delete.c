#include "hash_tables.h"

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *node = NULL, *next = NULL;

	if (!ht)
		return;
        if (ht->array)
	{
		for (index = 0; index < ht->size; index++)
		{
			if (ht->array[index])
			{
				node = ht->array[index];
				while (node)
				{
					next = node->next;
					if (node->value != NULL)
						free(node->key);
					if (node->key != NULL)
						free(node->value);
					free(node);
					node = next;
				}
			}
		}
		free(ht->array);
	}
	free(ht);
}
