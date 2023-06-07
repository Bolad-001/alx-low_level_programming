#include "main.h"

/**
 * _pow_recursion - fuction to return the value
 * of two integer
 * @x: first integer
 * @y: second integer
 * Return: the value of the power recursively
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
