#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specific index in a list.
 * @head: the start of the list.
 * @index: the index of the node that should be deleted.
 * Return: 1 if succeeded, -1 if it failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = (*head), *head2 = (*head), *next_node;
	unsigned int pos = 1, len = 0;

	if ((*head) == NULL || head == NULL)
	{
		return (-1);
	}

	while (head2 != NULL)
	{
		head2 = head2->next;
		len++;
	}

	if (index == 0)
	{
		(*head) = current->next;
		free(current);
		return (1);
	}
	else if (index <= len)
	{
		while (pos < index)
		{
			current = current->next;
			pos++;
		}
		next_node = current->next;

		current->next = next_node->next;

		free(next_node);

		return (1);
	}
	else
	{
		return (-1);
	}
}
