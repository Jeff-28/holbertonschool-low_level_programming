#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array of @nmemb elements
 *           of @size bytes each.
 * @nmemb: denotes the amount of elements to be in the array.
 * @size: denotes the size of the elements in the array.
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

char *mem;
unsigned int i = 0;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

mem = malloc(sizeof(unsigned int) * nmemb * size);

if (mem == NULL)
{
free(mem);
return (NULL);
}

while (i < nmemb * size)
{
mem[i] = 0;
i++;
}

return (mem);
}

