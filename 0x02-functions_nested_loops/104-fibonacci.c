#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers
 * starting with 1 and 2, separated by a comma followed by a space.
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int fib1 = 0, fib2 = 1, sum;
	long int fib1_hlf1, fib1_hlf2, fib2_hlf1, fib2_hlf2;
	long int hlf1, hlf2;

	for (i = 0; i < 92; i++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_hlf1 = fib1 / 10000000000;
	fib2_hlf1 = fib2 / 10000000000;
	fib1_hlf2 = fib1 % 10000000000;
	fib2_hlf2 = fib2 % 10000000000;

	for (i = 93; i < 99; i++)
	{
		hlf1 = fib1_hlf1 + fib2_hlf1;
		hlf2 = fib1_hlf2 + fib2_hlf2;
		if (fib1_hlf2 + fib2_hlf2 > 9999999999)
		{
			hlf1 += 1;
			hlf2 %= 10000000000;
		}

		printf("%lu%lu", hlf1, hlf2);
		if (i != 98)
			printf(", ");

		fib1_hlf1 = fib2_hlf1;
		fib1_hlf2 = fib2_hlf2;
		fib2_hlf1 = hlf1;
		fib2_hlf2 = hlf2;
	}
	printf("\n");
	return (0);
}
