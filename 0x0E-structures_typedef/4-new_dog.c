#include "dog.h"

/**
 * *new_dog - fucntion that create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name pf owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len_1 = str_len(name);
	int len_2 = str_len(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = malloc(sizeof(char) * (len_1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len_2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	str_cpy(dog->name, name);
	str_cpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
