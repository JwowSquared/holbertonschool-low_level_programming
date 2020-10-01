#include "hash_tables.h"

/**
* hash_table_get - gets value associated with key
* @ht: hash table to pull from
* @key: key to match with
*
* Return: value paired with key, else NULL
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *list = NULL;
	unsigned long int idx = 0;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((unsigned char *)key, ht->size);
	list = ht->array[idx];

	while (list != NULL)
	{
		if (!strcmp(key, list->key))
			return (list->value);
		list = list->next;
	}

	return (NULL);
}
