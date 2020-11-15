#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 * @size: the size of the triangle.
 * Return: nothing.
 */
void print_triangle(int size)
{
	int i, j, k, set_k = 1;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			k = set_k;

			for (j = 0; j < size; j++)
			{
				if (k < size)
				{
					_putchar(' ');
					k++;
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
			set_k++;
		}
	}
}
