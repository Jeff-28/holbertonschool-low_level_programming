#include "search_algos.h"
#include <math.h>

/**
 * min - returns the lowest between a and b
 * @a: integer
 * @b: integer
 *
 * Return: the lowest between a and b
 */
size_t min(int a, int b)
{
	return (a < b ? a : b);
}
/**
 * jump_search - searches for a value in an array of integers using the
 *					Jump search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located. If value is not present
 *			in array or if array is NULL, the function must return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l = 0, r = sqrt(size), sq = r;

	if (!array || size <= 0)
		return (-1);

	printf("Value checked array[%lu] = [%i]\n", l, array[l]);
	while (r < size && array[l] < value)
	{
		if (array[r] >= value)
			break;
		l += sq;
		r += sq;
		printf("Value checked array[%lu] = [%i]\n", l, array[l]);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", l, r);
	while (array[l] <= value && l <= min(size - 1, r))
	{
		printf("Value checked array[%lu] = [%i]\n", l, array[l]);
		if (array[l] == value)
			return (l);
		l++;
	}
	return (-1);
}
