#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */
void puts_half(char *str)
{
	int l, i, start;

	for (l = 0; str[l] != '\0'; l++)
		;

	if (l % 2 == 0)
		start = l / 2;
	else
		start = (l - 1) / 2;

	for (i = start; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
