#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
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
/**
 * _strcat - concatenates two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * str_concat - concatenates two strings.
 * @s1: input string 1.
 * @s2: input string 2.
 *
 * Return: NULL on failure, pointer to newly allocated space in memory.
 */
char *str_concat(char *s1, char *s2)
{
	char *dest;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dest = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2) + 1));
	if (dest == NULL)
		return (NULL);
	_strcat(dest, s1);
	_strcat(dest, s2);
	dest[_strlen(s1) + _strlen(s2)] = '\0';
	return (dest);
}


