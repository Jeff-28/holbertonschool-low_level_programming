#include "hash_tables.h"

void free_list(hash_node_t *node)
{
	if (node == NULL)
		return;
	free_list(node->next);
	free(node->key);
	free(node->value);
	free(node);
}

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht)
	{
		while (ht->array && i < ht->size)
		{
			if (ht->array[i])
			{
				free_list(ht->array[i]);
			}
			i++;
		}
		free(ht->array);
		free(ht);
	}
}
