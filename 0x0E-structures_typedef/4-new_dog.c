#include "dog.h"
/**
 * new_dog - creates a new struct of type dog
 * @name: struct parameter name
 * @age: struct parameter age
 * @owner: struct parameter owner
 * Return: returns pointer to buffer of datatype dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dest = malloc(sizeof(dog_t));

	if (dest == NULL)
		return (NULL);

	dest->name = malloc(sizeof(strlen(name)) + 1);

	if (dest->name == NULL)
		return (NULL);

	strcpy(dest->name, name);

	dest->owner = malloc(sizeof(strlen(owner)) + 1);

	if (dest->owner == NULL)
		return (NULL);

	strcpy(dest->owner, owner);

	dest->age = age;

	return (dest);
}
