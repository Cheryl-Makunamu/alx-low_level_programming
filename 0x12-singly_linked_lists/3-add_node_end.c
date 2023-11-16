#include <stdlib.h>
#include "lists.h"


/**
 * add_node_end - adds a new node at the beginnin
 * @head:pointer of  list_t list
 * @str: string 
 *
 * Return: address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *t = *h;
	int length = 0;

	while (str[length])
	length++;
	n = malloc(sizeof(list_t));
	if (!n)
	return (NULL);
	n->str = strdup(str);
	n->length = length;
	n->next = NULL;
	if (*h == NULL)
	{
		*h = n;
		return (n);
	}


	while (t->next)
	t = t->next;
	t->next = n;
	return (n);
}

