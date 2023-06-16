#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	int i;
	char letter;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}

	putchar('\n');

	return (0);
}
