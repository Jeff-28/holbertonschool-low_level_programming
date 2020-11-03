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
	listint_t *new, *temp = (*head);
	unsigned int pos = 1;

	if (idx == 0 || *head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	while (pos < idx)
	{
		temp = temp->next;
		pos++;
	}

	new->next = temp->next;
	temp->next = new;
	new->n = n;

	return (new);
}
