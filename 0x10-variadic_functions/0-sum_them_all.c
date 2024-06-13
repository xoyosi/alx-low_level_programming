#include "variadic_functions.h"


/**
 * sum_them_all - sum all together
 *
 * @n: the first arg ( the elipse count )
 *
 * Return: the sum of all
 */

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
