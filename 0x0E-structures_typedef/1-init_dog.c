#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initializes a variable
 * struct dog
 * @d: pointer to the struct
 * @name: name of dog
 * @age: age of the dog
 * @owner: dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if d == NULL
	{
		return (NULL);
	}

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
