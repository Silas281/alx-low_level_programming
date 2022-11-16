#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - this function prints a name
 * @name: string
 * @f: pointer
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
