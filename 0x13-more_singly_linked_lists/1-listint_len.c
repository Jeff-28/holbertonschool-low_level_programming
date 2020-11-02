#include "lists.h"

/**
* listint_len - returns the number of elements in a linked list.
* @h: the start of the list.
* Return: the number of elements of the list.
*/

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current_node;

	current_node = h;

	while (current_node != NULL)
	{
		nodes++;
		current_node = current_node->next;
	}
	return (nodes);
}
