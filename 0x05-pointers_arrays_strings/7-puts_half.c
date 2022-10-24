#include "main.h"

/**
*puts_half - prints half of a string
*@str: string
*
*Return: Void
*/

void puts_half(char *str)
{

	int len, half, max;

	len = 0;

	while (str[len] != '\0')

	{

		len++;

	}

	len--;
	max = len;

	half = max / 2;

	while (half < max)
	{

		_putchar(str[half]);

		half++;

	}

	_putchar('\n');

}

