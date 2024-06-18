#include "lists.h"

/**
 * print_list - print the lists in the struct
 *
 * @h: the struct
 *
 * Return: the number nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%zu] %s\n", strlen(h->str), h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
