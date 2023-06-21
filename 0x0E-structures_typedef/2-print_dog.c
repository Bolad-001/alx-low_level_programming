#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - function that prints a
 * struct dog
 * @d: tag name for dog
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	if (d == NULL)
	{
		printf("Name: (nil)", (*d).name);
	}
	if (d == NULL)
	{
		printf("owner: (nil)", (*d).owner);
	}

	printf("%s\n", (*d).name);
	printf("%d\n", (*d).age);
	printf("%s\n", (*d).owner);
}
