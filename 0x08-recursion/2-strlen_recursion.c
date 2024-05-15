#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 *
 * @s: the string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recusrion(s + 1));
}

