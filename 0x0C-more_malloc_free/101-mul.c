#include "main.h"
/**
 * main - main function call
 * @argc: argument count
 * @argv: 2D array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, mul = 1;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	else if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					exit(98);
				}

			mul *= atoi(argv[i]);
		}
		printf("%d", mul);

		return (0);
	}
}

