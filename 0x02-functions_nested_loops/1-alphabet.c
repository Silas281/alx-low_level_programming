#include "main.h"
/**
*print_alphabet - Prints alphabet in lowercase
*
*Return: 0 sucess
*/

void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
