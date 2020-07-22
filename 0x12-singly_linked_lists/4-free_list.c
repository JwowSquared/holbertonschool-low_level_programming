#include "lists.h"

/**
* free_list - frees memory associated with a list
* @head: head of list to free
*/
void free_list(list_t *head)
{
	list_t *next;
	list_t *node = head;

	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}
}
