#include "main.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
		for (i = size; i >= 1; i--)
		{
			for (j = 1; j < i; ++j)
				_putchar(' ');
			for (j = size; j >= i; --j)
				_putchar('#');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
