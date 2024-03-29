#include "dog.h"

#include <stdlib.h>

/**
 * str_len - function that return the length of a string
 * @s: string to check
 *
 * Return: the length of a string
 */

int str_len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);

}

#include <stdlib.h>

/**
 * *str_cpy - function that copies a string
 * @dest: pointer to buffer
 * @src: string to copy
 *
 * Return: the pointer to string
 */

char *str_cpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

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
