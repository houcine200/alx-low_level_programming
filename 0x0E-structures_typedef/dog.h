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
 * dog_s - typedef for struct dog
 */
typedef struct dog dog_s;

#endif
