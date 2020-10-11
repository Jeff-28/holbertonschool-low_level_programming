#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: the count of elements in argv.
 * @argv: array of strings.
 * Return: value of 0.
 */

int main(int argc, char **argv)
{

(void)argv;

printf("%d\n", argc - 1);

return (0);

}
