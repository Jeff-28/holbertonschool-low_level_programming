#include "search_algos.h"
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
 * print_arr - prints a given array of integers
 * @arr: pointer to the array to be printed
 * @size: the size of the array
 *
 * Return: nothing
 */
void print_arr(int *arr, size_t size)
{
	size_t i = 0;

	if (size <= 0)
		return;

	printf("Searching in array: ");
	while (i < size)
	{
		if (i == size - 1)
			printf("%i\n", arr[i]);
		else
			printf("%i, ", arr[i]);
		i++;
	}
}
/**
 * binary_search - searches for a value in an array of integers using the
 *					Binary search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located. If value is not present
 *			in array or if array is NULL, the function must return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l = 0, r = size - 1, m;

	if (!array || size <= 0)
		return (-1);

	print_arr(array, size);
	while (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
			return (m);
		print_arr(&array[l], r + 1 - l);
	}
	return (-1);
}
/**
 * exponential_search - searches for a value in an array of integers using the
 *					Exponential search algorithm
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located. If value is not present
 *			in array or if array is NULL, the function must return -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, l;
	int r;

	if (!array || size <= 0)
		return (-1);
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", bound, array[bound]);
		bound *= 2;
	}
	l = bound / 2;
	bound = min(bound, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, bound);
	r = binary_search(&array[l], bound + 1 - l, value);
	if (r >= 0)
		return (r + l);
	return (-1);
}
