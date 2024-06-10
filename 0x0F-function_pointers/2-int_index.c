#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @array: the array
 *
 * @size: the size of array
 *
 * @cmp: the callback function that compare
 *
 * Return: matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, m = 0;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			m++;
		}
	}
	if (m == 0)
		return (-1);
	return (m);
}
