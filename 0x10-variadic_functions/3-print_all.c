#include "variadic_functions.h"

/**
 * print_char - prints a character.
 * @arguments: list of arguments.
 * Return: nothing.
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_int - prints an integer.
 * @arguments: list of arguments.
 * Return: nothing.
 */
void print_int(va_list arguments)
{
	printf("%i", va_arg(arguments, int));
}

/**
 * print_str - prints a string.
 * @arguments: list of arguments.
 * Return: nothing.
 */
void print_str(va_list arguments)
{
	char *temp = va_arg(arguments, char *);

	if (temp == NULL)
	{
		temp = "(nil)";
	}
	printf("%s", temp);
}

/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 * Return: nothing.
 */
void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list arguments;
	printer_t printer_func[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{0, NULL}};

	va_start(arguments, format);

	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (printer_func[j].chars)
		{
			if (format[i] == printer_func[j].chars)
			{
				printf("%s", separator);
				printer_func[j].printer_pointer(arguments);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");

	va_end(arguments);
}
