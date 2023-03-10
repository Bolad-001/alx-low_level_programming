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
	int m = 1;

	if (size > 0)
	{
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j <= i - 1; j++)
			{
				putchar(' ');
			}
			for (k = 1; k <= m; k++)
			{
				putchar(35);
			}
			putchar('\n');
			m++;
		}
	}
	else
		putchar('\n');
}
