#include "variadic_functions.h"
/**
 * print_char - prints a character.
 * @arguments: list of arguments.
 */
void print_char(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}
/**
 * print_int - prints an integer.
 * @arguments: list of arguments.
 */
void print_int(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}
/**
 * print_str - prints a string.
 * @arguments: list of arguments.
 */
void print_str(va_list arguments)
{
	char *temp = va_arg(arguments, char *);

	if (temp == NULL)
		temp = "(nil)";
	printf("%s", temp);
}
/**
 * print_f - prints a float
 * @f: float number
 */
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_all - prints anything.
 * @format: list of types of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";
	va_list arguments;
	printer_t printer_func[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_str},
		{"f", print_f},
		{NULL, NULL}};

	va_start(arguments, format);
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
