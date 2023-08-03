#include "holberton.h"
/**
  * flip_bits - ccomputes the number of bits needed
  * to get from a number to another
  * @n: base number
  * @m: number to transform to
  * Return: number of bit transformations needed
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, result;
	int a = 8 * sizeof(n) - 1;

	result = 0;
	for (i = a; i >= 0; i--)
		if (((n ^ m) >> i) & 1)
			result++;
	return (result);
}
