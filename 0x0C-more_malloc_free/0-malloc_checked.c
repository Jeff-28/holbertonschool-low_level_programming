#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory.
 * @b: denotes the size of memory.
 *
 * Return: a void pointer.
 */

void *malloc_checked(unsigned int b)
{


void *mem = malloc(b);

if (mem == NULL)
{
free(mem);
exit(98);
}

return (mem);
}
