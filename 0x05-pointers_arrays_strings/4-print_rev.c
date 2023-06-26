#include "main.h"
/**
 * print_rev - prints a string, followed by a new line.
 * @s: input string to print.
 */
void print_rev(char *s)
{
	int l, i;

	for (l = 0; s[l] != '\0'; l++)
		;
	for (i = l - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

