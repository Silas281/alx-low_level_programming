#include "main.h"

/**
*swap_int - swap two values given their pointers
*@a: a is a pointer integer
*@b: b is a pointer integer
*Return: void
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;

	*a = *b;

	*b = temp;
}

