#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fuction that allocate memory
 * @b: integer to allocate memory for
 *
 * Return: 98 if fails else return the pointer
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)

		exit(98);

	return (p);
}
