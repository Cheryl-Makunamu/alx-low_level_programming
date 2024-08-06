#include "lists.h"

/**
 * add_nodeint_end - function thatadds a node at the end
 * @head: pointer to the first element
 * @n: data to insert
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *t = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (t->next)
		t = t->next;

	t->next = new;

	return (new);
}
