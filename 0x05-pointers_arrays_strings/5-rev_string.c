#include "main.h"

/**
* rev_string - print a string in reverse
* @s: input string
* Return: Always 0
*/

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
