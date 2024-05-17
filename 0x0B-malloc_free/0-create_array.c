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
	int i;
	char *array;


	if (size == 0)
	{
		return (NULL);
	}

	*array = (char *)malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL)
	}
	
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (c);
}
