#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list.
 * @head: the start of the list.
 * @str: string to be added to the new node.
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last;
	unsigned int i = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	while (str[i] != '\0')
	{
		i++;
	}
	new_node->len = i;

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
