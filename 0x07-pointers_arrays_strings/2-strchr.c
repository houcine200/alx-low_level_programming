#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of character c
 * or NULL if character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] == c)
			return (&s[i]);

return (0);
}
