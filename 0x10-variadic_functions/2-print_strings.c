#include "variadic_functions.h"
/**
 * print_strings - prints string, followed by a new line.
 * @separator: the seperator string
 * @n: the numbers of parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		char *str = va_arg(ap, char*);

		if (str == NULL)
			printf("(nil)");

		printf("%s", str);
		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
