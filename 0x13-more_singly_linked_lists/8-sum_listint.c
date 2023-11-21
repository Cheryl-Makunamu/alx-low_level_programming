#include "lists.h"


/**
 * sum_listint -  returns the sum of all the data (n) of a listint_t
 * @head: first node in the list
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
