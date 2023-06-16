#include <stdio.h>

/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter < 123)
{
	putchar(letter);
	++letter;
}
	putchar('\n');
	return (0);
}
