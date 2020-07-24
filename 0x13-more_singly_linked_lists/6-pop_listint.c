#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t list
* @head: double pointer to list head
*
* Return: value of deleted node, else 0
*/
int pop_listint(listint_t **head)
{
	int out = 0;
	listint_t *temp;

	if (*head == NULL)
		return (out);

	temp = *head;
	*head = (*head)->next;
	out = temp->n;
	free(temp);

	return (out);
}
