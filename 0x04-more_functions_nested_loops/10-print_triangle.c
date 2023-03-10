#include "main.h"

/**
* print_triangle - print a triangle followed by a new line
* @size: input integer
*
* Return: Always 0
*/

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
