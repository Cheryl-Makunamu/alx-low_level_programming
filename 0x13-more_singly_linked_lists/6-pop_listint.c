#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data inside the elements
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
