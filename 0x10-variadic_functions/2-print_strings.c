#include "variadic_functions.h"

/**
 * print_strings - print strings with separator
 *
 * @separator: the separator
 *
 * @n: the int passed in to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *s;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);

		if (s == NULL)
		{
			s = "(nil)";
		}

		printf("%s", s);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
}
