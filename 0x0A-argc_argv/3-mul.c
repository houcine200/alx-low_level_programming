#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}

