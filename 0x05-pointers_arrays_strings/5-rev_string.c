#include "main.h"
/**
 * rev_string - reverses a string.
 * @s: input string to reverse.
 */
void rev_string(char *s)
{
	int l, i, swap;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = 0; i < l / 2; i++)
	{
		j = (l - 1) - i;
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
