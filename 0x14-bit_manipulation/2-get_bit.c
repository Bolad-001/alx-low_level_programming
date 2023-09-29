#include "main.h"

/**
 * get_bit - function that returns the value
 * of a bit at a given index
 * @n: integers to check
 * @index: index of the integer
 *
 * Return: the value of the bit at the particluar
 * index otherwise return -1 if failed
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit = sizeof(unsigned long int)  * 8;
	unsigned long int mask = 1UL << index;

	if (index > bit)
		return (-1);


	if (mask & n)
		return (1);
	else
		return (0);
}
