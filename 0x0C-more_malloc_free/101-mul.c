#include "main.h"
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
			return 0;
	}
	return 1;
}
/**
 * main - main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: return 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
