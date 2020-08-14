#include "lists.h"

/**
* add_dnodeint - adds a doubly linked list node to the front of a list
* @head: head of list to add to
* @n: value to be stored in the new node
*
* Return: address of new node, else NULL
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h, *new;

	if (head == NULL)
		return (NULL);

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = h;
	*head = new;
	if (h != NULL)
		h->prev = new;

	return (new);
}
