#include "main.h"

/**
 * _strlen_recursion - function to return the
 * length of a string recursively
 * @s: string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
