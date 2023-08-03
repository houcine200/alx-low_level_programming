#include "main.h"
/**
  * print_binary - converts a decimal number to binary
  * @n: integer to convert
  */
void print_binary(unsigned long int n)
{
	unsigned long int curr;
	int pos;

	if (n == 0)
	{
		printf("0");
		return;
	}
/* Find the most significant bit position */
	for (curr = n, pos = 0; (curr >>= 1) > 0; pos++)
		;
/* Print the binary representation bit by bit */
	for (; pos >= 0; pos--)
	{
		if ((n >> pos) & 1)
			printf("1");
		else
			printf("0");
	}
}
