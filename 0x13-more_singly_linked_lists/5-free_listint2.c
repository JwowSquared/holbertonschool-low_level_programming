#include "lists.h"

/**
* free_listint2 - frees a listint_t list using a double pointer
* @head: double pointer to list head
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
