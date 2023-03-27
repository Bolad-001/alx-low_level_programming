#ifndef DOG_HEADER
#define DOG_HEADER
/**
 * struct dog - structure of a Dog
 * @name: name of the Dog
 * @age: age of the Dog
 * @owner: Dog's owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
