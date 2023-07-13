#include "main.h"
/**
 * string_nconcat - concatenate two strings up to n bytes.
 * @s1: source string
 * @s2: string to truncate up to n bytes
 * @n: number of bytes to truncate by
 * Return: pointer to new buffer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest;
	int len;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	if (strlen(s2) <= n)
		len = strlen(s1) + strlen(s2)  + 1;
	else
		len = strlen(s1) + n + 1;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	dest = strcat(dest, s1);
	dest = strncat(dest, s2, n);
	dest[len - 1] = '\0';

	return (dest);
}
