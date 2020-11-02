#include "lists.h"

/**
 * pop_listint - deletes the head node and returns its data (n).
 * @head: the start of the list.
 * Return: the data of the head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *new_head = (*head);
	int k;

	if (head == NULL)
	{
		return (0);
	}

	k = new_head->n;

	(*head) = new_head->next;

	free(new_head);

	return (k);
}
