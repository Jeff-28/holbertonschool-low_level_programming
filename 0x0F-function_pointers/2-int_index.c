#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: the number of elements in the array.
 * @cmp: function pointer that will compare integers.
 * Return: index of the first element for which the
 *         cmp function doesn't return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{

int index = 0, i, result;

if (array == NULL)
{
return ('\0');
}

if (size <= 0)
{
return (-1);
}

for (i = 0; i < size; i++)
{

result = cmp(array[i]);

if (result == 0)
index++;

else
{
return (index);
}

if (index == size && result == 0)
{
return (-1);
}

}

return (index);
}
