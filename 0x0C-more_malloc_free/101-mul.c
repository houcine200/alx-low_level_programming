#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * is_number - checks if a string is a number
 * @str: the string to check
 * Return: 1 if it's a number, 0 otherwise
 */
int is_number(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	unsigned int num1, num2, mul;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
