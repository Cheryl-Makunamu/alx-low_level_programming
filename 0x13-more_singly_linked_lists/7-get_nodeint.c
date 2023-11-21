#include "lists.h"


/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in list
 * @index: index of the returned node
 *
 * Return: pointer to the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *t = head;


	while (t && a < index)
	{
		t = t->next;
		a++;
	}


	return (t ? t : NULL);
}
