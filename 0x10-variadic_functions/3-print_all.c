#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char *const format, ...)
{
	va_list arg;
	int i = 0;
	char *sep = "";
	int ch;
	int num;
	double d;
	char *str;

	va_start(arg, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				{
					ch = va_arg(arg, int);
					printf("%s%c", sep, ch);
					break;
				}
			case 'i':
				{
					num = va_arg(arg, int);
					printf("%s%d", sep, num);
					break;
				}
			case 'f':
				{
					d = va_arg(arg, double);
					printf("%s%.2f", sep, d);
					break;
				}
			case 's':
				{
					str = va_arg(arg, char *);
					printf("%s%s", sep, (str == NULL ? "(nil)" : str));
					break;
				}
			default:
				break;
		}

		sep = ", ";
		i++;
	}

	va_end(arg);
	printf("\n");
}
