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
	list_t *t;
	size_t s;


	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	for (s = 0 ; str[s] ; s++)
		;
	n->len = s;
	n->next = NULL;
	t = *head;

	if (t == NULL)
	{
		*head = n;
	}
	else
	{

		while (t != NULL)
			t = t->next;
		t->next = n;
	}
	return (*head);
}

