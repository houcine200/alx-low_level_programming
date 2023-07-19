#include "3-calc.h"
/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char *operator;
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	ptr = get_op_func(operator);

	if (argv[2] != operator)
	{
		printf("Error\n");
		exit(99);
	}
	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
			atoi(argv[3]) == 0)

	{
		printf("Error\n");
		exit(100);
	}

	calc = ptr(num1, num2);
	printf("%d\n", calc);

	return (0);
}
