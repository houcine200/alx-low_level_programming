#include <stdio.h>
/**
 * main - Prints out the larget prime factor of 612852475143
 * Return:return 0 with success.
 */
int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		for (; n % i == 0; n /= i)
		{
		}
	}
	printf("%ld\n", n);
	return (0);
}
