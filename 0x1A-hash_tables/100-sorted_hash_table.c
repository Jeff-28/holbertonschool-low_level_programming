#include "hash_tables.h"
/**
 * shash_table_create - creates a hash table
 * @size: determines the size of the table
 * Return: a pointer to the newly created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i = 0;

	table = malloc(sizeof(shash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	while (i < size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
/**
 * create_node - creates a new node
 * @key: is the key, cannot be empty string
 * @value: value associated with the key, must be duplicated
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *create_node(const char *key, const char *value)
{
	shash_node_t *node;

	node = malloc(sizeof(shash_node_t));
	if (!node)
		return (NULL);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = node->snext = node->sprev = NULL;
	return (node);
}
/**
 * shash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value
 * @key: is the key, cannot be empty string
 * @value: the value associated with the key, value must be duplicated
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	shash_node_t *temp, *node;
	char *new_val;

	if (!ht || !ht->array || !ht->size || !key || strlen(key) == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_val = strdup(value);
			if (!new_val)
				return (0);
			free(temp->value);
			temp->value = new_val;
			return (1);
		}
		temp = temp->next;
	}
	node = create_node(key, value);
	if (!node)
		return (0);
	node->next = ht->array[idx];
	ht->array[idx] = node;
	list_add(ht, node);
	return (1);
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: the table to look into
 * @key: the key with the value to retrieve
 * Return: the value associated with the key, or NULL if not found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *temp;

	if (!ht || !ht->array || !ht->size || !key || strlen(key) == 0)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints a hash table
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	temp = ht->shead;
	printf("{");
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}
/**
 * shash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i = 0;
	shash_node_t *temp;

	if (!ht || !ht->array || !ht->size)
		return;
	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = temp;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
/**
 * list_add - adds a node to the list
 * @table: the hash table
 * @node: the node
 * Return: nothing
 */
void list_add(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (!table->shead && !table->stail)
	{
		table->shead = table->stail = node;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;
			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: the hash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}
