#include "holberton.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to calculate the factorial
 *
 * Return: the factorial of @n or -1 if @n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}
