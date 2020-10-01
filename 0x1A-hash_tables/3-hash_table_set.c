#include "hash_tables.h"

/**
* hash_table_set - updates hash table with new element
* @ht: hash table to modify
* @key: key to pass to hash
* @value: value to store in hash map
*
* Return: 1 on Success, else 0
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *set;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	set = new_hash_node(ht->array[idx]);
	if (set == NULL)
		return (0);

	set->key = strdup(key);
	set->value = strdup(value);
	ht->array[idx] = set;
	return (1);
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
