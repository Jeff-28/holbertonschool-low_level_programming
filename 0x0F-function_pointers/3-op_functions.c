#include "3-calc.h"

/**
 * op_add - adds.
 * @a: addend.
 * @b: addend.
 * Return: the total.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - substracts.
 * @a: minuend.
 * @b: number to substract.
 * Return: the difference.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies.
 * @a: factor.
 * @b: factor.
 * Return: the product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides.
 * @a: dividend.
 * @b: divisor.
 * Return: the quotient.
 */
int op_div(int a, int b)
{
	if (b == 0)
		printf("Error\n"), exit(100);

	return (a / b);
}
/**
 * op_mod - returns the remainder of a division.
 * @a: dividend.
 * @b: divisor.
 * Return: the remainder.
 */
int op_mod(int a, int b)
{
	if (b == 0)
		printf("Error\n"), exit(100);
	return (a % b);
}
