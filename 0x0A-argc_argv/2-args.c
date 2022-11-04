#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives from the cmd
 * @argc: number of arguments from the cmd
 * @argv: array of arguments from the cmd
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);

		i++;
	}

	return (0);
}
