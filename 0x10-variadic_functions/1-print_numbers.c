#include "variadic_functions.h"

/**
 * print_numbers - print numbers with separator
 *
 * @separator: the separator
 *
 * @n: the number of int passed in the function
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;


	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s ",va_arg(args, int), separator);
	}

	printf("\n");
}
