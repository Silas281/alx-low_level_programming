#include"main.h"

/**
*main - Entry Code
*
*Return: 0 (Success)
*/

int main(void)
{
	char str[20] = "_putchar\n";
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);

		i++;
	}

	return (0);
}
