#include "holberton.h"

/**
 * main - Write a program that prints the numbers from 1 to 100. But for
 *        multiples of three print Fizz instead of the number and for the
 *        multiples of five print Buzz.
 *
 * Return: value 0.
 */
int main(void)
{
	int num = 1;

	while (num <= 100)
	{
		if ((num % 3 != 0) && (num % 5 != 0))
		{
			printf("%d", num);
		}
		if ((num % 3) == 0)
		{
			printf("Fizz");
		}
		if ((num % 5) == 0)
		{
			printf("Buzz");
		}
		if (num != 100)
		{
			printf(" ");
		}
		num++;
	}
	printf("\n");
	return (0);
}
