#include "main.h"

/**
* print_sign - prints the sign of a number
* @n: number to be checked
*
* Return: 1 and prints + if n is > 0
* otherwise return 0 and prints 0 if n is zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		putchar('0');
		return (0);
	}

	else
	{
		putchar('-');
		return (-1);
	}

}
