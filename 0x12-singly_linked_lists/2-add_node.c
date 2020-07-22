#include "lists.h"

/**
* add_node - adds a new node to the beginning of a list
* @head: current head of list
* @str: string to go inside the new node
*
* Return: pointer to new node, else NULL if malloc fail
*/
list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	while (new->str[len])
		len++;
	new->len = len;
	new->next = *head;
	(*head) = new;

	return (new);
}
