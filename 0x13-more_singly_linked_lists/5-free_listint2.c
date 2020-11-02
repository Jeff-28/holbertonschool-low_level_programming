#include "lists.h"

/**
 *free_listint2 -frees the list from the memory allocated and sets head to NULL
 * @head: the start of the list.
 * Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *temp;

	current_node = (*head);

	while (current_node != NULL)
	{
		temp = current_node;
		current_node = current_node->next;
		free(temp);
	}

	*head = NULL;
}
