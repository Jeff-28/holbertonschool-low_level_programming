#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on
 *                  each element of an array.
 * @array: pointer to the array.
 * @size: size of the array.
 * @action: pointer to function to b used.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

unsigned int i;

if (array == NULL || size == '\0')
{
return;
}

if (action == NULL)
{
return;
}

for (i = 0; i < size; i++)
{
(*action)(array[i]);
}

}
