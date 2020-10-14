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


if (size == 0)
{
return ('\0');
}

buffer = malloc(sizeof(unsigned int) * size);

*buffer = c;

return (buffer);

}
