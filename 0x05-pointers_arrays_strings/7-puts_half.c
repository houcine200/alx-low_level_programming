#include "main.h"
/**
 * puts_half - Prints out the first half of a string.
 * @str: input string to print.
 */
void puts_half(char *str)
{
	int l, i;

	for(l = 0; str[l] != '\0'; l++)
		;
	for(i = l / 2; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
