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
	dog_t *dest;

	dest = malloc(sizeof(dog_t));

	if (dest == NULL)
		return (NULL);

	dest->name = malloc(sizeof(char) * (strlen(name) + 1));

	if (dest->name == NULL)
		return (NULL);

	dest->owner = malloc(sizeof(char) * (strlen(owner) + 1));

	if (dest->owner == NULL)
	{
		free(dest->name);
		free(dest);
		return (NULL);
	}
	strcpy(dest->name, name);

	strcpy(dest->owner, owner);

	dest->age = age;

	return (dest);
}
