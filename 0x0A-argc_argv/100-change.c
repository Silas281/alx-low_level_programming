
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * make_change - this finds least number of coins to get a change
 * @n: amount
 * Return: least number of coins to be changed with
 */

int make_change(int n)
{
	int coins, qrts, tenP, fiveP, twoP, oneP;

	coins = 0;

	qrts = 0;

	tenP = 0;

	fiveP = 0;

	twoP = 0;

	oneP = 0;

	while (n > 0)
	{

		if (n >= 25)
		{

			n -= 25;

			qrts += 1;

		}

		else if (n >= 10)
		{

			n -= 10;

			tenP += 1;

		}

		else if (n >= 5)
		{

			n -= 5;

			fiveP += 1;

		}

		else if (n >= 2)
		{

			n -= 2;

			twoP += 1;

		}

		else
		{

			n -= 1;

			oneP += 1;

		}

	}

	coins = qrts + tenP + fiveP + twoP + oneP;

	return (coins);

}
/**
 * main - this  prints minimum number of coins to make a change
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int coins;

	if (argc != 2)
	{

		printf("Error\n");

		return (1);
	}
	else if (atoi(argv[1]) < 0)
	{

		printf("0\n");

	}
	else
	{

		coins = make_change(atoi(argv[1]));

		printf("%d\n", coins);
	}
	return (0);
}
