#include "main.h"
/**
 * _atoi - converts a string to an integer.
 * @s: the string to convert
 * Return: the converted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	for (; s[0] != '\0'; s++)
	{
		if (s[0] == '-')
			sign = -sign;

		else if (s[0] >= '0' && s[0] <= '9')
			num = (num * 10) + (s[0] - '0');

		 else if (num > 0)
			 break;
	}
	return (num * sign);
}
