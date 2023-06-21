#include <stdio.h>

/**
 * main - prints the add of the even-valued terms of the Fibonacci sequence
 * starting with 1 and 2, followed by a new line.
 * The numbers must be separated by commas, followed by a space ,
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long num1 = 0, num2 = 1, fibsum;
	long int tot_sum;

	while (1)
	{
		fibsum = num1 + num2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			tot_sum += fibsum;

		num1 = num2;
		num2 = fibsum;
	}
	printf("%.0f\n", tot_sum);

	return (0);
}
