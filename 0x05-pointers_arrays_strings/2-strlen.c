#include "main.h"
/**
 * _strlen - calculates the length of a string.
 * @s: pointer to the character array.
 * Return: length of the string
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		;
	return (l);
}
