#include "lists.h"

/**
* list_len - calculates the amount of nodes in a singly linked list
* @h: pointer to list
*
* Return: amount of nodes
*/
size_t list_len(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		count++;
		node = node->next;
	}

	return (count);
}
