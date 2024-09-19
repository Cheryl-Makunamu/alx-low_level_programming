#include "lists.h"

/**
 * sum_dlistint - function returns the sum of all the data (n)
 *
 *
 * @head: head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int s;

	s = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			s += head->n;
			head = head->next;
		}
	}

	return (s);
}
