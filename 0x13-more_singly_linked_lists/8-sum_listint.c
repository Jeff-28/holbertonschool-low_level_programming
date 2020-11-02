#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a list.
 * @head: the start of the list.
 * Return: the sum of all the data.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

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
