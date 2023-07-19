#include "3-calc.h"

int main(argc, *argv[]) 
{
	int num1, num2, calc;
	char operator;
	int (*ptr)(int, int);


	num1 = atoi(argv[1];
        num2 = atoi(argv[3];
	operator = argv[2];
	ptr = get_op_func(operator); 

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != operator)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == "/" || argv[2] == "%") && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	



	return 0;
}
