#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: dog struct containing the name, age and owner's name.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * _dog - typedef for struct dog
 */
typedef struct dog dog_t;

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
