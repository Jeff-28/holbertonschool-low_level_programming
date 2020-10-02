#include "holberton.h"

/**
 * reverse_array - reverses the content of an array.
 * @a: array of integers.
 * @n: variable for index.
 * Return: void.
 */

void reverse_array(int *a, int n)
{
int c, x;

for (c = 0; c < n / 2; c++)
{
x = a[c];
a[c] = a[n - c - 1];
a[n - c - 1] = x;
}

}
