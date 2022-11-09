#include "main.h"
#include <stdlib.h>

/**
 * create_array - This function creates array of chars
 * @size: length of array
 * @c: char to initialize array
 * Return: NULL if size = 0, else pointer to array
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;

	char *array;

	array = (char *) malloc(sizeof(char) * size);

	if (array == NULL)
	{

		return (NULL);
	}

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{

			*(array + i) = c;

		}



		return (array);

	}

}
