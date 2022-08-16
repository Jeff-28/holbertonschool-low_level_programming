#include "hash_tables.h"


void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	long unsigned int i = 0, flag = 0;

	if (ht)
	{
		putchar('{');
		while (i < ht->size)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				flag = 1;
			}
			i++;
		}
		printf("}\n");
	}
}
