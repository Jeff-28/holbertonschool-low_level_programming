#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list.
 * @h: the head of the list.
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t elements = 0;
	const list_t *current_node;

	current_node = h;

	while (current_node != NULL)
	{
		elements++;
		current_node = current_node->next;
	}
	return (elements);
}
