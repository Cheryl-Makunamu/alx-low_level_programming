#include <stdlib.h>
#include "lists.h"


/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to list_t 
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t y = 0;

	while (h)
	{
		h = h->next;
		y++;
	}
	return (y);
}
