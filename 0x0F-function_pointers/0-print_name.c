#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: name of the person.
 * @f: pointer to the function that prints.
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{

if (f == NULL)
return;

(*f)(name);

}
