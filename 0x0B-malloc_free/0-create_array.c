#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: specific char that initializes the array.
 *
 * Return: NULL if size = 0 or fail, if successful pointer to array.
 */

char *create_array(unsigned int size, char c)
{
	char *a = malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}


