
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * isNumber - checks to see if input is a number or not
 * @s: input to check for number
 * Return: 1 if number, and 0 if not number
 */

int isNumber(char *s)
{

	int i;

	i = 0;

	while (*(s + i) != '\0')
	{

		if (*(s + i) >= '0' && *(s + i) <= '9')
		{

			i++;

		}

		else
		{

			return (0);

		}
	}
	return (1);
}

/**
 * main - prints the sum of positive numbers from cmd
 * @argc: number of arguments from cmd
 * @argv: array of arguments from cmd
 * Return: (0)
 */

int main(int argc, char *argv[])
{

	int j, sum, is_number;

	sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else if (argc > 1)
	{

		j = 1;

		while (j < argc)
		{

			is_number = isNumber(argv[j]);

			if (is_number == 1)
			{

				sum += atoi(argv[j]);
			}
			else
			{

				printf("Error\n");

				return (1);

			}

			j++;
		}
		printf("%d\n", sum);

	}
	return (0);
}
