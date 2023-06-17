#include <stdio.h>
/**
 * main - Prints all possible combinations of two two-digit numbers,
 *        ranging from 0-99, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c, d;

	for (a = 48; a < 58; a++)
	{
		for (b = 48; b < 58; b++)
		{
			for (c = 48; c < 58; c++)
			{
				for (d = 48; d < 58; d++)
				{
					if (a == 48 && b == 48 && c == 48 && d == 48)
					{
						continue;
					}
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (!(a == 57 && b == 56 && c == 57 && d == 57))
					{
						putchar(',');
						putchar(' ');
					}
					if (a == 57 && b == 56 && c == 57 && d == 57)
					{
						return (0);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
