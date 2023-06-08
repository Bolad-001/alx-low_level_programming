#include "main.h"

/**
 * check_prime - function that check for input integer greater
 * tha 2
 * @n: input integer
 * @i: divisor or checker
 * Return: 1 or 0 if input integer is a prime number
 * or not respectively
 */

int check_prime(int n, int i)
{
	if (n == i)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}

/**
 * is_prime_number - function to check if an
 * input integer is a prime number
 * @n: integer to check
 * Return: 1 if integer is a prime number 
 * otherwise return 0
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i));
	}
}

