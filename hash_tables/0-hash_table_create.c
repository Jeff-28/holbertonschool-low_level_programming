#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	hash_node_t **array;

	array = malloc(sizeof(hash_node_t *) * size);
	if(!array)
		return NULL;


	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return NULL;

	ht->size = size;
	ht->array = array;

	return ht;
}
