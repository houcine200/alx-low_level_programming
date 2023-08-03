#include "main.h"
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		result = (result << 1) + (b[i] - '0');
	}
	return (result);
}
