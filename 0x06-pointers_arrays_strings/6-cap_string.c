#include "main.h"
/**
* cap_string - capitalizes all words of a string.
* @s: pointer to input string.
* Return: Returns pointer to capitalized string.
*/

char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= ('a' - 'A');
	}
	for (i = 1; s[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))
			{
				s[i] -= ('a' - 'A');
			}
		}
	}
	return (s);
}
