#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: the start of the list.
 * @idx: the index of the list where the new node should be added. Starts at 0.
 * @n: data to be added in the new node.
 * Return: the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *head2 = (*head), *temp = (*head);
	unsigned int pos = 1, len = 0;

	if (*head == NULL)
	{
		return (NULL);
	}

	while (head2 != NULL)
	{
		head2 = head2->next;
		len++;
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (idx <= len)
	{
		while (pos < idx)
		{
			temp = temp->next;
			pos++;
		}
	}
	else
	{
		return (NULL);
	}

	new->next = temp->next;
	temp->next = new;
	new->n = n;

	return (new);
}
