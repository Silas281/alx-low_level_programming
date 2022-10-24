#include "main.h"

/**
*puts_half - prints half of a string
*@str: string
*
*Return: Void
*/

void puts_half(char *str)
{
	int len, half;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	len++;
	
	len--;

	half = len / 2;

	while (half < len)
	{
		_putchar(str[half]);

		half++;
	}

	_putchar('\n');
}
