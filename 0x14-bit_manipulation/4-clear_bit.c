#include "main.h"

/**
 * clear_bit - function that set the value of a bit
 * to 0 at a given index
 * @n: pointer to the integer
 * @index: index of the integer
 *
 * Return: 1 if success otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= bit)
	{
		return (-1);
	}

	*n &= ~mask;
		return (1);
}
