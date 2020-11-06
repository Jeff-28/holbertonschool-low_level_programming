#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0.
 *
 */

int main(void)
{
	int n, i;

	for (n = '0'; n <= '9'; n++)
	{
		for (i = '1'; i <= '9'; i++)
		{
			if (n < i)
			{
				putchar(n);
				putchar(i);

				if (n != '8' || i != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
