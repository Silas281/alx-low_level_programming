#include "main.h"

/**
*_strlen - Returns the length of a string
*@s: s is string
*Return: integer (length of string)
*/

int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len = len + 1;

	}

	return (len);
}
