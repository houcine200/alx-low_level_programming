#include <stdio.h>
/**
 * main - main block
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 0;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	if (i == '9')
	{
		break;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
