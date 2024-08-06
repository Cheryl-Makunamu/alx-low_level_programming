
#include "lists.h"

/**
 * get_nodeint_at_index - function thatreturns the node at a certain index
 * @head: first node in the linked list
 * @index: index of the node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *t = head;

	while (t && j < index)
	{
		t = t->next;
		j++;
	}

	return (t ? t : NULL);
}
