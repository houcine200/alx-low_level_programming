#include "main.h"
/**
  * detect - checks recursively the input from is_prime_number
  * @n: iterator
  * @b: base number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int detect(int n, int b)
{
	if (n < 2)
		return (0);

	else if (b * b > n)
		return (1);

	else if (n % b == 0)
		return (0);

	return (detect(n, b + 1));
}
/**
  * is_prime_number - checks if the number is a prime number
  * @n: the number to check
  * Return: 1 if n is a prime, else return 0 otherwise.
  */
int is_prime_number(int n)
	{
	return (detect(n, 2));
	}
