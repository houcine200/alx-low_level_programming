#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a, b;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			putchar (a);
			putchar (b);
			if (!(a == 56 && b == 57))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
