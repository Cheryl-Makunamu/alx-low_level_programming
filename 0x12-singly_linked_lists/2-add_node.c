#include <stdlib.h>
#include "lists.h"


/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t
 * @str: new string to 
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	int l = 0;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	while (str[l])
		l++;


	n->str = strdup(str);
	n->len = l;
	n->next = *head;
	*head = n;
	return (*head);
}


