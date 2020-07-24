#include "lists.h"

/**
* get_nodeint_at_index - returns the nth node of a listint_t list
* @head: pointer to head of list
* @index: "index" of list to return
*
* Return: pointer to node at index, else NULL
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *it = head;

	while (it != NULL)
	{
		if (i < index)
		{
			it = it->next;
			i++;
		}
		else
			return (it);
	}

	return (NULL);
}
