#include "main.h"

/**
* print_line - Function to draw a straight line
* @n: number of time the line will print
* Return: Always 0
*/

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
