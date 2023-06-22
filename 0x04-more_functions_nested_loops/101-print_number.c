include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */
void print_number(int n)
{
	long length, result, i, temp, exp;

	result = n;
	exp = length =  1;
/*Check negatives*/
	if (result < 0)
	{
		result *= -1;
		_putchar('-');
	}

/**/
	temp = result;
	while (temp >= 10)
	{
		length++;
		temp /= 10;
	}

/*Create exponent*/
	for (i = 1; i < length; i++)
		exp *= 10;
/*Main*/
	while (exp > 1)
	{
		_putchar((result / exp) % 10 + '0');
		exp /= 10;
	}
	_putchar(result % 10 + '0');
}
