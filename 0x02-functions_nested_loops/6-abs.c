#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer.
 * Return: the absolute value of a number.
 * @k: number to check.
 */
int _abs(int k)
{

	if (k < 0)
	{
		return (k * (-1));
	}
	else
	{
		return (k);
	}
}
