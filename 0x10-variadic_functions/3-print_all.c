#include "variadic_functions.h"

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
		switch (*format)
		{
			case 'c':
				{
					c = va_arg(args, int);
					printf("%c", c);
					break;
				}
			case 'i':
				{
					num = va_arg(args, int);
					printf("%d", num);
					break;
				}
			case 's':
				{
					s = va_arg(args, char *);
					if (*s == NULL)
						s = "(nill)";
					printf("%s", s);
					break;
				}
			case 'f':
				{
					d = va_arg(args, double);
					printf("%f", d);
					break;
				}
		}
		format++;
	}

	va_end(args);
	printf("\n");
}
