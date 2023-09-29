#include "main.h"

/**
 * print_binary - function to print the binary
 * representation of a number using bitwise
 * operator
 * @n: integer to convert
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = (sizeof(unsigned long int) * 8 - 1);
	int i;
	int cancel_zeros = 1;

	if (n == 0)
	{
		_putchar('0');
	}

	for (i = bit; i >= 0; i--)
	{
		unsigned long int mask = 1UL << i;

		if (n & mask)
		{
			_putchar('1');
			cancel_zeros = 0;
		}
		else if (!cancel_zeros)
		{
			_putchar('0');
		}
	}
}
