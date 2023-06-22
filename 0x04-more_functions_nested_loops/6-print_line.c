#include "main.h"
/**
 * print_line - draws a straight line (n) characters long.
 * @n: the number of underscores to print.
 */
void print_line(int n)
{
	for (i = 1; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}
