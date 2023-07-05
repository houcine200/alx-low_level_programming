#include "main.h"
/**
 * _puts_recursion - prints a string with recursion
 * @s: string to print
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return ('\0');
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
