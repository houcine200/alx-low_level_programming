#include "main.h"
/**
 * wildcmp - compares two strings, s1 and s2, to check if they match.
 * @s1: The first input string to compare.
 * @s2: The second input string containing the wildcard pattern.
 * Return: 1 if s1 matches the wildcard pattern in s2, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 == *s2 || *s2 == '*')
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
