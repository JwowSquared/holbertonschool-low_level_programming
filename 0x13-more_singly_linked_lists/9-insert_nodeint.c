#include "lists.h"

/**
* insert_nodeint_at_index - doesn't really leave much to the imagination
* @head: double pointer to head of list
* @idx: index to insert new node at
* @n: value to store in new node
*
* Return: pointer to new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *prev, *it = *head;

	if (head == NULL)
		return (NULL);

	if (i == idx)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);
		*head = new_node;
		new_node->next = it;
		new_node->n = n;
		return (new_node);
	}

	while (it != NULL)
	{
		if (i < idx)
		{
			prev = it;
			it = it->next;
			i++;
		}
		else
			break;
	}

	if (it == NULL && i != idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = it;
	prev->next = new_node;

	return (new_node);
}
