#include "lists.h"

/**
 * list_len - the length of the list
 *
 * @h: the struct
 *
 * Return: the length of the list
 */

size_t list_len(const list_t *h)
{
	size_t count;
	int i;

	for (i = 0; h->next != NULL; i++)
	{
		count++;
	}

	return (count);
}
