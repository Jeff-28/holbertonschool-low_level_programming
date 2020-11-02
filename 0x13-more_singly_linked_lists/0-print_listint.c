#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to the start of the list.
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;
	const listint_t *current_node;

	current_node = h;

	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		current_node = current_node->next;
		nodes++;
	}
	return (nodes);
}
