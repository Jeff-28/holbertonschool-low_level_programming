#include "lists.h"

/**
 * free_listint - frees the list from the memory allocated.
 * @head: the start of the list.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{

	if (head != NULL)
	{
		free_listint(head->next);
	}
	free(head);
}
