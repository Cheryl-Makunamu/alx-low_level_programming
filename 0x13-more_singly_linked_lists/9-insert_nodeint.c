#include "lists.h"


/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the first node
 * @idx: index of new node
 * @n: data to insert
 *
 * Return: position to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *ne;
	listint_t *t = *head;

	ne = malloc(sizeof(listint_t));
	if (!ne || !head)
	return (NULL);
	ne->n = n;
	ne->next = NULL;


	if (idx == 0)
	{
		ne->next = *head;
		*head = ne;
		return (ne);
	}


	for (a = 0; t && a < idx; a++)
	{
		if (a == idx - 1)
	{
		ne->next = t->next;
		t->next = ne;
	return (ne);
	}
	else
	t = t->next;
}

return (NULL);
}
