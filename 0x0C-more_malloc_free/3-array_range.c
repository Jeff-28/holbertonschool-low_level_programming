#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers.
 * @min: should denote the lowest parameter of values.
 * @max: should denote the highest parameter of values.
 * Return: pointer to new array.
 */

int *array_range(int min, int max)
{

int *mem, *array;
int dist = min;

if (min > max)
{
return (NULL);
}

while (dist < max)
{
dist++;
}

mem = malloc(sizeof(*mem) * dist);

if (mem == NULL)
{
free(mem);
return (NULL);
}

array = mem;

while (*array < max)
{
*array = min;
array++;
min++;
}

return (mem);
}
