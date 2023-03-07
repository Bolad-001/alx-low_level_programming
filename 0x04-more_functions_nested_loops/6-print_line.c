#include "main.h"

/**
* print_line - Function to draw a straight line
* @n: number of time the line will print
* Return: Always 0
*/

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
