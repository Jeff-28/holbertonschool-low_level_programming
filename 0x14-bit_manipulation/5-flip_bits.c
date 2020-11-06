#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 *             one number to another.
 * @n: number to start.
 * @m: number to end.
 * Return: returns the number of bits you would need to flip to get from one
 *          number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;

	n = n ^ m;

	while (n > 0)
	{
		if (n & 1)
		{
			count++;
		}
		n >>= 1;
	}

	return (count);
}
