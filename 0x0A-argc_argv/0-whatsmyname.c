#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that prints its name, followed by a new line.
 * @argc: argument count of argv.
 * @argv: array of arguments.
 * Return: value of 0.
 */

int main(int argc, char **argv)
{

int i = 0;

if (i < argc)
{
printf("%s\n", argv[i]);
}

return (0);

}
