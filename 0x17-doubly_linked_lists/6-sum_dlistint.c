#include "lists.h"

/**
* sum_dlistint - adds all n values in a list and returns the sum
* @head: head of list to sum
*
* Return: sum of n values in list, else 0
*/
int sum_dlistint(dlistint_t *head)
{
	int out = 0;

	if (head == NULL)
		return (out);

	while (head != NULL)
	{
		out += head->n;
		head = head->next;
	}

	return (out);
}
