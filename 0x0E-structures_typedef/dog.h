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
typedef struct dog _dog;

#include <stdio.h>
#include <stddef.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
