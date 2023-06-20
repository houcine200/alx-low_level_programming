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

	lt = r % 10;
		if (lt < 0)
	{
		lt = lt * -1;
	}

	_putchar(lt + 48);
	return (lt);
}
