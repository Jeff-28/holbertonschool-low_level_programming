#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at a specific index in a list.
 * @head: the start of the list.
 * @index: the index of the node that should be deleted.
 * Return: 1 if succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = (*head);
	unsigned int pos = 0;

	while (current != NULL)
	{
		if (pos == index)
			break;
		current = current->next;
		if (current)
			pos++;
	}
	if (current)
	{
		if (current->next)
			current->next->prev = current->prev;
		if (current->prev)
			current->prev->next = current->next;
		else
			*head = current->next;
		free(current);
		return (1);
	}
	return (-1);
}
