#include "lists.h"


/**
 * pop_listint - deletes the head node of list
 * @head: pointer to the first element
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *t;
	int m;

	if (!head || !*head)
	return (0);

	m = (*head)->n;
	t = (*head)->next;
	free(*head);
	*head = t;

	return (m);
}
