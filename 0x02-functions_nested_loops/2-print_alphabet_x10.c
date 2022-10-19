#include "main.h"
/**
*print_alphabet - Prints alphabet in lowercase 10 times
*
*Return: 0 sucess
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c = 'a';

		while (c <= 'z')
		{

			_putchar(c);

			c++;
		}

		_putchar('\n');
	}
}
