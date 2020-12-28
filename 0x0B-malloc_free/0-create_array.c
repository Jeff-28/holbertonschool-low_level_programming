#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - creates an array of chars, and initializes it
 *                with a specific char.
 * @size: denotes the size of the array to be created.
 * @c: denotes the specific char to initialize the array.
 * Return: a pointer to new array.
 */
char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * size);
	if (buffer == NULL)
	{
		free(buffer);
		return (NULL);
	}

	while (i < size)
	{
		buffer[i] = c;
		i++;
	}
	return (buffer);
}
