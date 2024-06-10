#include "function_pointers.h"

/**
 * print_name - prints name
 *
 * @name: the name
 *
 * @f: the callback function
 */


void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	(*f)(name);
}
