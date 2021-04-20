#include "search_algos.h"

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
 * search - recursively searches for a value in a sorted array of integers
 * @arr: array where the value will be searched
 * @l: leftmost index in the array
 * @r: rightmost index in the array
 *
 * Return: the index where value is, or -1 if value is not present in array
 */
int search(int *arr, int l, int r, int value)
{
	int m = (l + r) / 2;

	if (l <= r)
	{
		print_arr(&arr[l], r + 1 - l);
		if (arr[m] == value)
		{
			if (arr[m - 1] != value)
				return (m);
			return (search(arr, l, m, value));
		}
		if (arr[m] < value)
			return (search(arr, m + 1, r, value));
		if (arr[m] > value)
			return (search(arr, l, m, value));
	}
	return (-1);
}
/**
 * advanced_binary - searches for a value in a sorted array of integers using
 *					the Binary search algorithm, and returns the index of its
 *					first instance in the array
 * @array: is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: the first index where value is located. If value is not present
 *			in array or if array is NULL, the function must return -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size <= 0)
		return (-1);

	return (search(array, 0, size - 1, value));
}
