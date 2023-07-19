#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int nb;
	int i;
	char *ar;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nb = atoi(argv[1]);

	if (nb < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ar = (char *)main;

	for (i = 0; i < nb; i++)
	{
		if (i =! (nb - 1))
			printf("%02hhx ", ar[i]);
		else
		{
			printf("%02hhx\n", ar[i]);
			break;
		}
	}
	return (0);
}
