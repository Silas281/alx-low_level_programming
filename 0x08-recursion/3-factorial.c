#inlude "main.h"

/**
*factorial - return a factorial of a number
*@n: integer
*Return: integer
*/

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	return factorial(n - 1);
}
