#include <stdio.h>

/**
 * get_endianness - function that check endianess
 *
 *
 * Return: 0 if endianess is big else 1
 */

int get_endianness(void)
{
	int x = 1;
	char *c;

	c = (char *)&x;

	return (*c);
}
