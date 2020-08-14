#include "lists.h"

/**
* free_dlistint - frees memory associated with a doubly linked list
* @head: head of list to free
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	if (head == NULL)
		return;

	next = head;
	while (next != NULL)
	{
		next = next->next;
		free(head);
		head = next;
	}
}
