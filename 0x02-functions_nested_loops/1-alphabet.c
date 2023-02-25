#include <main.h>

/**
* print_alphabet - print alphabet in lower case
*
* Return: void
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
