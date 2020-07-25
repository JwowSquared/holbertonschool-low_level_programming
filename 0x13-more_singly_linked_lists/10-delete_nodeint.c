#include "lists.h"

/**
* delete_nodeint_at_index - doesn't really leave much to the imagination
* @head: double pointer to head of list
* @idx: index to delete node at
*
* Return: 1 on success, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp, *prev, *it = *head;

	if (it == NULL)
		return (-1);

	if (idx == 0)
	{
		*head = it->next;
		free(it);
		return (1);
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

	if (it == NULL)
		return (-1);
	temp = it;
	it = it->next;
	prev->next = it;

	free(temp);

	return (1);
}
