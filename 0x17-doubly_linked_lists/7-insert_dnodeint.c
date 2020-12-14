#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the start of the list.
 * @idx: the index of the list where the new node should be added. Starts at 0.
 * @n: data to be added in the new node.
 * Return: the address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head2 = (*h), *temp = (*h);
	unsigned int pos = 1, len = 0;

	if (h == NULL)
		return (NULL);
	while (head2 != NULL)
	{
		head2 = head2->next;
		len++;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		if (*h == NULL)
			new->next = NULL;
		new->next = (*h);
		new->prev = NULL;
		if (*h)
			(*h)->prev = new;
		(*h) = new;
	}
	else if (idx <= len && idx > 0)
	{
		while (pos < idx)
		{
			temp = temp->next;
			pos++;
		}
		new->next = temp->next;
		new->prev = temp;
		if (temp->next)
			new->next->prev = new;
		temp->next = new;
	}
	else
		return (NULL);
	return (new);
}
