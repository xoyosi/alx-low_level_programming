#include "main.h"

/**
 * _strdup - returns a pointer to newly memory
 *
 * @str: the string
 *
 * Return: the pointer of the new memory address
 */

char *_strdup(char *str)
{
	int i, len;
	char *array;

	for (i = 0; *str != '\0'; i++)
		len++;

	array = malloc(sizeof(char) * len + 1);

	if (array == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
