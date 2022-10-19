#include "main.h"
/**
*_islower - Checks if lower or upper
*@c:c is ascii
*Return: 0 success
*/

int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{

		return (1);
	}
	else
	{
		return (0);
	}
}
