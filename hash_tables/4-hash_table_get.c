#include "hash_tables.h"


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	idx = key_index((const unsigned char *)key, 1024);

	if (ht->array[idx])
	{
		return ht->array[idx]->value;
	}
	return NULL;
}
