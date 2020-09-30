#include "holberton.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: a variable for a pointer.
 * @b: a variable for a pointer.
 * Return: always 0.
 */


void swap_int(int *a, int *b)
{
int c = *a;
int d = *b;
*a = d;
*b = c;

}
