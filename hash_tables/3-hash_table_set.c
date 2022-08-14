#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (strlen(key))
		return 0;

	idx = key_index((const unsigned char *)key, 1024);
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = malloc(sizeof(hash_node_t));
		if(ht->array[idx] == NULL)
			return 0;
	}
	else
	{
		new = malloc(sizeof(hash_node_t));
		if(new == NULL)
			return 0;

		new->next = ht->array[idx];
		ht->array[idx] = new;
	}

	ht->array[idx]->key = strdup(key);
	ht->array[idx]->value = strdup(value);

	return 1;
}
