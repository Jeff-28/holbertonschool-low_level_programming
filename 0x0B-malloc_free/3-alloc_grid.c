#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a two dimensional
 *              array of integers.
 * @width: denotes size of the first dimension.
 * @height: denotes size of the second dimension.
 * Return: a pointer integer.
 */

int **alloc_grid(int width, int height)
{

int *grid;

if (width == 0 || height == 0)
{
return (NULL);
}

if (width < 0 || height < 0)
{
return (NULL);
}

grid = malloc(width * height);

if (grid == NULL)
{
free(grid);
return (NULL);
}

grid = 0;

return (grid);
}
