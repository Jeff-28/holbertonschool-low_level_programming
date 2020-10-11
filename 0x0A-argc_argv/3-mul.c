#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc:  count of arguments in @argv.
 * @argv: array of arguments.
 * Return: value of 0 if success or value of 1 if failure.
 */

int main(int argc, char **argv)
{

int product = 0;

if (argc == 3)
{

product = product + atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", product);
return (0);
}

else
{
printf("Error\n");
return (1);
}

}
