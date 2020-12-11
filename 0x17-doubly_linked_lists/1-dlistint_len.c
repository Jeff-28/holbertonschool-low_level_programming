#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: the head of the list.
 * Return: the number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current_node = h;

	while (current_node != NULL)
	{
		current_node = current_node->next;
		nodes++;
	}
	return (nodes);
}
