#include "lists.h"


/**
 * reverse_listint - reverses a listint_t
 * @head: pointer to the first node
 *
 * Return: pointer to the first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p = NULL, *n;

	while (*head)
	{
		n = (*head)->n;
		(*head)->n = p;
		p = *head;
		*head = n;
	}

	*head = p;

	return (*head);
}
