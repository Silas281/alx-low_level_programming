#include "main.h"

/**
*_strcmp - compares two strings
*@s1: first string
*@s2: second string to compare
*
*Return: integer
*/


int _strcmp(char *s1, char *s2)
{
	int k, i, len1, len2, dif, j;

	k = 0;

	i = 0;

	j = 0;

	while (s1[i] != '\0')
	{
		len1++;

		i++;
	}

	while (s2[j] != '\0')
	{
		len2++;
		j++;
	}

	dif = s1 - s2;

	if (dif != 0)
	{
		return (dif);
	}

	while (s1[k] != '\0')
	{
		if (s1[k] != s2[k])
		{
			return (dif);
		}

		k++;
	}
	return (0);
}
