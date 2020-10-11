#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc: the count of elements in argv.
 * @argv: array of strings.
 * Return: value of 0.
 */

int main(int argc, char **argv)
{

int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return (0);

}
