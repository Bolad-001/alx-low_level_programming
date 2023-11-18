#ifndef DOG_H
#define DOG_H

#include <stdlib.h>

/**
 * struct dog - A dog information
 * @name: name of the dog
 * @age: age of the dog
 * @owner: Dog owner
 *
 * Description - structur to define a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

int str_len(char *s);
char *str_cpy(char *dest, char *src);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *str_cpy(char *dest, char *src);
int str_len(char *s);

#endif
