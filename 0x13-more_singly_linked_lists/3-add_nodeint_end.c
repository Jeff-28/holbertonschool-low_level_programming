#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list.
 * @head: the start of the list.
 * @n: new data.
 * Return: the address of the new node;
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	last = *head;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

		while (last->next != NULL)
		{
			last = last->next;
		}

	last->next = new_node;

	return (new_node);
}
