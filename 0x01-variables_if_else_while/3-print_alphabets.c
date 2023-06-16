#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';
	char upper = 'A';

	while (letter < 123)
	{
		putchar(letter);
		++letter;
	}
	while (upper < 91)
	{
		putchar(upper);
		++upper;
	}
	putchar('\n');
	return (0);
}
