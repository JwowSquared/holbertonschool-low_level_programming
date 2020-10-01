#include "hash_tables.h"

/**
* hash_table_create - creates an empty hash table of specified size
* @size: size of hash table
*
* Return: pointer to new hash table, else NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *out = NULL;

	out = malloc(sizeof(hash_table_t));
	if (out == NULL)
		return (NULL);

	out->array = malloc(sizeof(hash_node_t *) * size);
	if (out->array == NULL)
	{
		free(out);
		return (NULL);
	}
	out->size = size;
	return (out);
}

/**
* new_hash_node - creates a new blank hash node
* @prev: ironically, what the new node->next will be
*
* Return: pointer to new node, else NULL
*/
hash_node_t *new_hash_node(hash_node_t *prev)
{
	hash_node_t *out;

	out = malloc(sizeof(hash_node_t));
	if (out == NULL)
		return (NULL);

	out->key = NULL;
	out->value = NULL;
	out->next = prev;
	return (out);
}
