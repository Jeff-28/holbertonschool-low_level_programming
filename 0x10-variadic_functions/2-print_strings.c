#include "variadic_functions.h"

/**
 * print_strings - prints a string followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 * Return: nothing.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;
	char *temp;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(str, char *);

			if (temp != NULL)
			{
				printf("%s", temp);
			}
			else
			{
				printf("(nil)");
			}

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}

	}

	printf("\n");
	va_end(str);
}
