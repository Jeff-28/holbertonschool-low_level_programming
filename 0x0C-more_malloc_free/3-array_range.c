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
	int *mem;
	int i = 0, dist;

	if (min > max)
		return (NULL);
	dist = max - min + 1;
	mem = malloc(sizeof(int) * dist);
	if (mem == NULL)
		return (NULL);
	while (i < dist)
	{
		mem[i] = min;
		i++;
		min++;
	}
	return (mem);
}
