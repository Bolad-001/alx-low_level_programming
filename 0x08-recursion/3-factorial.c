#include "main.h"

/**
 * factorial - function to return the factorial
 * of a give number
 * @n: integer
 * Return: The factorial of those given number
 * recursively
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
