#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: character to use to delimit
 * @n: number of elements to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		return;

	va_start(ap, n);

	for (i = 0; i < n ; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
