#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, flip = 0;
	unsigned long int current;
	unsigned long int next_num = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = next_num >> i;
		if (current & 1)
			flip++;
	}

	return (flip);
}
