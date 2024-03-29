#include "main.h"

/**
 * binary_to_uint - funtion that convert a binary
 * number to unsigned int
 * @b: pointer to the binary number
 *
 * Return: the converted number or 0 if
 * there is one or more chars in the string b that is
 * not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i = 0;

	if (!b)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; b++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			res = res * 2 + (b[i] - '0');
		}
	}
	return (res);
}
