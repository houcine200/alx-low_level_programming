#include "main.h"
/**
  * get_bit - gets value of int at an index
  * @n: input long integer
  * @index: index to start at
  * Return: value of the bit at the index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > sizeof(n) * 8)
		return (-1);

	bit = n >> index;

	return (bit & 1);
}
