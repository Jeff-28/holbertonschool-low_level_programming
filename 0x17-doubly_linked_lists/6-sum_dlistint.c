#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list.
 * @head: the start of the list.
 * Return: the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
