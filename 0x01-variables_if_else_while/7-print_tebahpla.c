#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	int i = 'z';

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
