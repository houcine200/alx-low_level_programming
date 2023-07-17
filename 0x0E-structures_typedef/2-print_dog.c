#include "dog.h"
/**
 * print_dog - prints the dog struct
 * @d: pointer to the dog struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(1);

	if (d->name == NULL)
		printf("Name: (nill\n");
	printf("Name: %s\n", d->name);

	if (d->age < 0)
        	printf("Age: (nil)\n");
	printf("Age: %f\n", d->age);

	if ((*d).owner == NULL)
		printf("Owner: (nill\n");
	printf("Owner: %s\n", (*d).owner);
}
