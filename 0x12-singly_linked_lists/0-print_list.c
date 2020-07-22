#include "lists.h"

/**
* print_list - prints a singly linked list
* @h: pointer to list to print
*
* Return: the number of nodes in the list
*/
size_t print_list(const list_t *h)
{
	const list_t *node = h;
	size_t count = 0;

	while (node != NULL)
	{
		if (node->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", node->len, node->str);
		node = node->next;
		count++;
	}

	return (count);
}
