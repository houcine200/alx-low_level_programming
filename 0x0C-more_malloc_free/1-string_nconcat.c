#include "main.h"
#include <string.h>
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
	unsigned int len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (strlen(s2) <= n)
		len = strlen(s1) + strlen(s2)  + 1;
	else
		len = strlen(s1) + n + 1;

	dest = malloc(sizeof(char) * len);

	if (dest == NULL)
		return (NULL);

	strcpy(dest, s1);
	if (n >= strlen(s2))
		dest = strcat(dest, s2);
	else
		dest = strncat(dest, s2, n);
	dest[len - 1] = '\0';

	return (dest);
}
