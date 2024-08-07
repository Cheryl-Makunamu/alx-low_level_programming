
#include "lists.h"

/**
 * add_nodeint - function that adds a node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
