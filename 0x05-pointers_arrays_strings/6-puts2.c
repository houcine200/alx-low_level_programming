#include "main.h"
/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
