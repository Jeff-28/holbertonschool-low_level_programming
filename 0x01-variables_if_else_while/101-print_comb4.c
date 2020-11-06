#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0.
 *
 */

int main(void)
{
	int hundreds, tens, ones;

	for (ones = '0'; ones <= '9'; ones++)
	{
		for (tens = '0'; tens <= '9'; tens++)
		{
			for (hundreds = '0'; hundreds <= '9'; hundreds++)
			{
				if (hundreds > tens && tens > ones)
				{
					putchar(ones);
					putchar(tens);
					putchar(hundreds);

					if (ones != '7' || tens != '8' || hundreds != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
