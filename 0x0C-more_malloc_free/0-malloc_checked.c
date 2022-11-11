#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 * @b: int size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
