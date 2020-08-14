#include "lists.h"

/**
* insert_dnodeint_at_index - inserts a new node at specified index
* @h: pointer to head of doubly linked list
* @idx: index to add new node
* @n: value to store in new node
*
* Return: pointer to new node, else NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *itr;
	unsigned int  i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	itr = *h;
	if (itr == NULL)
		return (NULL);

	while (i != idx)
	{
		i++;
		if (itr->next == NULL)
			break;
		itr = itr->next;
	}

	if (i == idx)
	{
		if (itr->next == NULL)
			return (add_dnodeint_end(h, n));

		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);

		itr->prev->next = new;
		new->prev = itr->prev;
		new->next = itr;
		itr->prev = new;
		new->n = n;
		return (new);
	}

	return (NULL);
}
