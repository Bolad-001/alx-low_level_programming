#include "main.h"

/**
* _pow_recursion - print the value of x
* @x: input integer
* @y: exponential
* Return: -1 if y is lower than 0, otherwise returns x
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else
		return (x *= _pow_recursion(x, y - 1));
}
