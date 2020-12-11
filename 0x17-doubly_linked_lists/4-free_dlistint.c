#include "lists.h"

/**
 * free_list - frees a list from dinamically allocated memory.
 * @head: the start of the list.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	if (head != NULL)
	{
		free_dlistint(head->next);
	}
	free(head);
}
