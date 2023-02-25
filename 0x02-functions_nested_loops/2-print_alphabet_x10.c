#include "main.h"

/**
* print_alphabet_x10 - print 10 times the alphabet in lower case
*
* Return: void
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
	}

	putchar('\n');
}
