#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @r: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int r)
{
	int lt;

	if (r < 0)
	{
		r = r * -1;
	}
	lt = r % 10;

	_putchar(lt + 48);
	return (lt);
}
