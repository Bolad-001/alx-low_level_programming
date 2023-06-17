#include "main.h"
#include  <stdlib.h>

/**
 * array_range - function that create an array
 * of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, b;

	if (min > max)
	{
		rteurn (NULL);
	}
	b = max - min - 1;

	ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < b; i++)
	{
		b[i] = min++;
	}
	return (ptr);
}
