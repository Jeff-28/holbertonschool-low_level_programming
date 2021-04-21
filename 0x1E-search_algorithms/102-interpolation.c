#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 *							using the Interpolation search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: the first index where value is located, If value is not present in
 *			array or if array is NULL, the function must return -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t mid;

	if (!array || size <= 0)
		return (-1);
	while (array[high] != array[low])
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (mid < low || mid > high)
		{
			printf("Value checked array[%lu] is out of range\n", mid);
			break;
		}
		printf("Value checked array[%lu] = [%i]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
