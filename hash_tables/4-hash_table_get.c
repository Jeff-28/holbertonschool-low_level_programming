#include "hash_tables.h"


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (!ht || !key)
		return NULL;
	idx = key_index((const unsigned char *)key, ht->size);

	if (ht->array[idx] && (strcmp(ht->array[idx]->key, key) == 0))
	{
		return ht->array[idx]->value;
	}
	return NULL;
}
