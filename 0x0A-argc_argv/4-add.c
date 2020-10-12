#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: count of arguments in @argv.
 * @argv: array of arguments.
 * Return: value of 0 if success or value of 1 if failure.
 */

int main(int argc, char *argv[])
{

int sum = 0;
int i, j, test;
char *temp;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{

temp = argv[i];

for (j = 0; temp[j] != '\0'; j++)
{
test = isdigit(temp[j]);

if (test == 0)
{
printf("Error\n");
return (1);
}

}

sum += atoi(temp);

}

printf("%d\n", sum);

return (0);
}
