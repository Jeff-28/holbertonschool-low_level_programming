#include "lists.h"

/**
 * print_list - prints all the elements of a linked list.
 * @h: the head of the list.
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current_node;

	current_node = h;

	while (current_node != NULL)
	{
		if (current_node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{

		printf("[%d] %s\n", current_node->len, current_node->str);
		}

		current_node = current_node->next;
		nodes++;
	}
	return (nodes);
}
