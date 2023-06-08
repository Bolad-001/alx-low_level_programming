#include "main.h"

/**
 * _sqrt_recursion - function to return the natural 
 * square root of a number
 * @n: integer to check
 * Return: return the value recursively
 */

int _sqrt_recursion(int n)
{
	int find_sqrt(n, guess_num);

	int guess_num = 1;

	return (find_sqrt(int n, int guess_num));
}

/**
 * find_sqrt - funtion to check for squreroot of a number
 * @guess_num: natural int to check
 * @n: integer to check
 * Return: the value of the square root
 */

int find_sqrt(int n, int guess_num)
{
	if (n == guess_num * guess_num)
	{
		return (guess_num);
	}
	else if (guess_num < n)
	{
		return (find_sqrt(n, guess_num + 1));
	}
	else
	{
		return (-1);
	}
}
