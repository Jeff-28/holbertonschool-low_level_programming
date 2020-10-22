#include "3-calc.h"

/**
 * main - performs simple math operations and prints the result.
 * @argc: indicates the count of arguments in argv.
 * @argv: contains arguments for the operations
 * Return: value of 0.
 */

int main(int argc, char **argv)
{
	int num1, num2;

	if (argc != 4)
		printf("Error\n"), exit(98);

	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(num1, num2));

	return (0);

}
