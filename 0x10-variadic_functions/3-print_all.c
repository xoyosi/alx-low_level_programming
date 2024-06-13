#include "variadic_function.h"

/**
 * print_all - print all c i f s
 *
 * @format: the format specifier
 *
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int num;
	char c;
	char *s;
	double d;


	va_start(args, format);

	while(*format)
	{
		if (format == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
		}
		else if (format == 's')
		{
			s = va_arg(args, char *);

			if (*s)
			{
				printf("%s", s);
			}
			else
			{
				printf("(nil)");
			}
		}
		else if (format == 'f')
		{
			d = va_arg(args, double);
			printf("%f", d);
		}
	}

	printf("\n");
}
