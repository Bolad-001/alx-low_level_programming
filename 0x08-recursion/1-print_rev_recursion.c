#include "main.h"

/**
 * void _print_rev_recursion(char *s) - function to recursively print a string in reverse
 * @s: string
 *
 * return: reverse string
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
