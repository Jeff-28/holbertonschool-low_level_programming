#include "lists.h"

/**
 * reverse_listint - reverses a linked list.
 * @head: the start of the list.
 * Return: a pointer to the first node in the list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *prev;

	if (*head == NULL || head == NULL)
	{
		return (NULL);
	}

	prev = (*head);
	temp = prev->next;
	(*head) = temp;
	prev->next = NULL;

	while (*head != NULL)
	{
		(*head) = (*head)->next;
		temp->next = prev;
		prev = temp;
		temp = *head;
	}
	(*head) = prev;

	return (*head);
}
