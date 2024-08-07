#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @head: listint_t list to be free
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
