#include "main.h"
int square_root(int i, int j);

/**
* _sqrt_recursion - returns the natural square root 
* of a number
* @n: input integer
* Return: the natural square root of the number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (square_root(1, n));
}

/**
* square_root - find square root
* @i: inpur value
* @j: square root value
* Return: the square root
*/
int square_root(int i, int j)
{
	if (i > j)
		return (-1);
	else if (i * i == j)
		return (i);
	return (square_root(i + 1, j));
}
