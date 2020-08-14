#include "lists.h"

/**
* get_dnodeint_at_index - returns a node at specified index
* @head: head of doubly linked list
* @index: index of node to return
*
* Return: pointer to matched node, else NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i++ == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
