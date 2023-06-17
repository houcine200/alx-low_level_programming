#include <stdio.h>
/**
 * main - Prints all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int a, b, c;

	for (a = 48; a < 58; a++)
	{
		for (b = a + 1; b < 58; b++)
		{
			for (c = b + 1 ; c < 58; c++)
			{
			putchar (a);
			putchar (b);
			putchar (c);
			if (!(a == 55 && b == 56 && c == 57))
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
