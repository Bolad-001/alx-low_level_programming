#include "main.h"

/**
* print_last_digit - print last digit of a number
* @n: last didgit number to be printed
*
* Return: the value of the last digit
*/

int print_last_digit(int n)
{
	int i = n % 10;

	if (i < 0)
	{
		i *= -1;

	putchar(i + '0');
	return (i);
	}
}
