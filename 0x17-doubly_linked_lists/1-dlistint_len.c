#include "lists.h"

/**
* dlistint_len - counts number of nodes in a doubly linked list
* @h: head of list to count
*
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t out = 0;

	if (h == NULL)
		return (out);

	while (h != NULL)
	{
		h = h->next;
		out++;
	}

	return (out);
}
