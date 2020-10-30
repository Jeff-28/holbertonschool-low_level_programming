#include "lists.h"

/**
 * free_list - frees a list from dinamically allocated memory.
 * @head: the start of the list.
 * Return: nothing.
 */
void free_list(list_t *head)
{

	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}

		free(head);
}
