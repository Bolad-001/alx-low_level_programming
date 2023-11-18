#include <stdlib.h>

/**
 * str_len - function that return the length of a string
 * @s: string to check
 *
 * Return: the length of a string
 */

int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}
