#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: the start of the list
 * @n: integer
 * Return: the address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	last = *head;
	new_node->next = NULL;
	new_node->n = n;
	if (last)
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new_node;
	}
	new_node->prev = last;
	if (last == NULL)
	{
		*head = new_node;
	}
	return (new_node);
}
