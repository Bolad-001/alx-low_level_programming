#include "main.h"

/**
 * _puts_recursion - fuction that prints a string followed by a new line
 * @s: string to print
 *
 * return: recursively return the string
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return ('\n');
	}
	else
	{
		putchar(*s);
		return _puts_recuursion (s + 1);
	}
}
