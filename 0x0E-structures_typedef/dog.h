#ifndef DOG_H
#define DOG_H

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


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
