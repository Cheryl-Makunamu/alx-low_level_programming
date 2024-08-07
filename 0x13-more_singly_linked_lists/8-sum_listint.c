#include "lists.h"

/**
 * sum_listint - function thtcalculates the sum of all the data
 * @head: first node in the linked list
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int s = 0;
	listint_t *t = head;

	while (t)
	{
		s += t->n;
		t = t->next;
	}

	return (s);
}
