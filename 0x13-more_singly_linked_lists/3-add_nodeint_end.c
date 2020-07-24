#include "lists.h"

/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: double pointer to head of list
* @n: integer to assign to new node
*
* Return: address of new element, or NULL on failure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *it = *head;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (it == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (it->next != NULL)
		it = it->next;

	it->next = new_node;

	return (new_node);
}
