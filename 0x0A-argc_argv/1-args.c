#include "main.h"
#include <stdio.h>
/**
 * main - this prints the number of arguments passed through the cmd
 * @argc: number of arguments in the cmd
 * @argv: array of arguments from the cmd
 * Return: 0
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", argc - 1);

	return (0);

}
