#include "lists.h"

/**
* print_dlistint - print a doubly linked list
* @h: head of list to print
*
* Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t out = 0;

	if (h == NULL)
		return (out);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		out++;
	}

	return (out);
}
