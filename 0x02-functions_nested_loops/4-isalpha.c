include "main.h"
/**
*_isalpha - Checks if alphabet or not
*@c: c is an ascii cahracter
*
*Return: 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
