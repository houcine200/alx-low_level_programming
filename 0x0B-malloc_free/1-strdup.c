#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - duplicates a string.
 * @str: input string to be duplicated.
 *
 * Return: NULL if insufficient memory or str = NULL, pointer to duplicate
 * string if successful.
 */
char *_strdup(char *str)
{
	char *dest = malloc(sizeof(char) * (strlen(str) + 1));
	unsigned int i;

	if (str == NULL || dest == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		dest[i] = str[i];
	dest[i] = '\0';

	return (dest);
}
