#include "lists.h"

/**
* add_node_end - creates a new node and slaps it on the end of a list
* @head: pointer to current head of the list
* @str: string to set in the new node
*
* Return: pointer to new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *node;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
		*head = new;

	node = *head;
	while (node->next)
		node = node->next;

	node->next = new;

	new->next = NULL;
	new->str = strdup(str);
	if (new->str != NULL)
		while (new->str[len])
			len++;
	new->len = len;
	return (new);
}
