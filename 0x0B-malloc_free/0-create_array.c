#include "main.h"

/**
 * create_array - creates an array of chars
 *
 * @size: the size of the array
 *
 * @c: the specific char
 *
 * Return: the array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	c = malloc(sizeof(char) * size);

	if (c == NULL)
	{
		return (NULL)
	}
	return (c);
}
