#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int n, m, r;

	for (n = 0; n < 10; n++)
	{
		_putchar('0');

		for (m = 1; m < 10; m++)
		{
			_putchar(',');
			_putchar(' ');

			r = n * m;

			if (r < 10)
				_putchar(' ');
			else
				_putchar((r / 10) + '0');

			_putchar((r % 10) + '0');
		}
		_putchar('\n');
	}
}
