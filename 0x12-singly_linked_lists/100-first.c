#include <stdlib.h>
#include "lists.h"


/**
 * free_list - that frees a list_t list
 * @head: list to be free
 */
void free_list(list_t *head)
{
	list_t *u;

	while ((u = head) != NULL)
	{
	head = head->next;
	free(u->str);
	free(u);
	}
}
