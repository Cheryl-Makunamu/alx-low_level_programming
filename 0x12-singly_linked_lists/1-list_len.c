#include <stdlib.h>
#include "lists.h"

/**
 * list_len - funtion that returns no. of elements in linked list
 * @h: pointer to list_t list
 *
 * Return: no. of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t o = 0;

	while (h)
	{
		o++;
		h = h->next;
	}
	return (o);
}

