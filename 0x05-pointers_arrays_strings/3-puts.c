#include "main.h"

/**
*_puts - writes a string to the stdout
*@str: str is a string
*Return: Void
*/

void _puts(char *str)
{
	int len;

	len = 0;

	while (str[len] != '\0')
	{
		_putchar(str[len]);

		len++;
	}
	_putchar('\n');
}
