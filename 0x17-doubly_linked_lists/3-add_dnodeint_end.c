#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of a doubly linked list
* @head: head of list to add to
* @n: value to be stored in the new node
*
* Return: address of new node, else NULL
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *itr;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		return (new);
	}

	itr = *head;
	while (itr->next != NULL)
		itr = itr->next;

	itr->next = new;
	new->prev = itr;
	new->next = NULL;
	new->n = n;
	return (new);
}
