#include "lists.h"

/**
* sum_listint - returns the sum of all the data in a linked list
* @head: pointer to list head
*
* Return: sum of all node->n's
*/
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *node = head;

	if (node == NULL)
		return (total);

	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}

	return (total);
}
