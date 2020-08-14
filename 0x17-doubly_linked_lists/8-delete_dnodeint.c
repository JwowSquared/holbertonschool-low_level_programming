#include "lists.h"

/**
* delete_dnodeint_at_index - removes a node from a doubly linked list at index
* @head: head of doubly linked list
* @index: position in the list to remove from
*
* Return: 1 on success, -1 on failure
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *itr, *before, *after;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		after = (*head)->next;
		free(*head);
		if (after != NULL)
			after->prev = NULL;
		*head = after;
		return (1);
	}

	itr = *head;
	while (itr != NULL)
	{
		if (i == index)
			break;
		itr = itr->next;
		i++;
	}

	if (itr == NULL)
		return (-1);
	before = itr->prev;
	after = itr->next;
	free(itr);
	if (before != NULL)
		before->next = after;
	if (after != NULL)
		after->prev = before;
	return (1);
}
