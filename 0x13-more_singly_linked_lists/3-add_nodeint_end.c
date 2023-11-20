#include "lists.h"


/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: points to first node
 * @n: input value
 *
 * Return: pointer to the new node,if NULL it quits
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *h;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		h = *head;
		while (h->next != NULL)
			h = h->next;
		h->next = new;
	}

	return (*head);
}
