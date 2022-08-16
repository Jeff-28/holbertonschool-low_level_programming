#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *new;

	if (strlen(key) == 0)
		return 0;

	idx = key_index((const unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if(new == NULL)
		return 0;

	if (!ht->array[idx])
	{
		ht->array[idx] = new;
		ht->array[idx]->key = strdup(key);
		ht->array[idx]->value = strdup(value);
		ht->array[idx]->next = NULL;
	}
	else
	{
		if (strcmp(key, ht->array[idx]->key) == 0)
		{
			ht->array[idx]->value = strdup(value);
			free(new);
		}
		else
		{
			new->next = ht->array[idx];
			ht->array[idx] = new;
			ht->array[idx]->key = strdup(key);
			ht->array[idx]->value = strdup(value);
		}
	}
	return 1;
}
