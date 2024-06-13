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
	int i = 0;
	char *str;
	char current;
	int sep = 0;


	va_start(args, format);

	while (format && (current = format[i]) != '\0')
	{
		if (sep)
			printf(", ");

		switch (current) {
			case 'c':
				{
					printf("%c", va_arg(args, int));
					sep = 1;
					break;
				}
			case 'i':
				{
					printf("%d", va_arg(args, int));
					sep = 1;
					break;
				}
			case 'f':
				{
					printf("%f", va_arg(args, double));
					sep = 1;
					break;
				}
			case 's':
				{
					str = va_arg(args, char *);

					if (str == NULL)
					{
						str = "(nil)";
					}
					printf("%s", str);
					sep = 1;
					break;
				}
			default:
				{
					sep = 0;
					break;
				}
		}

		i++;
	}

	va_ends(args);
	printf("\n");
}

