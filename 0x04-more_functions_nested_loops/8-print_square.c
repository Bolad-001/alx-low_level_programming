#include "main.h"

/**
* print_square - function that prints a square in the terminal
* followed by a new line
* @size: input integer
* Return: Always 0
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
				_putchar(92);
			_putchar('\n');
		}
	}
		_putchar('\n');

}
