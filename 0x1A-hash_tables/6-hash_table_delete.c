#include "hash_tables.h"

/**
* hash_table_delete - frees all memory associated with a hash table
* @ht: hash table to eradicate
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *itr = NULL, *temp = NULL;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			itr = ht->array[i];
			while (itr != NULL)
			{
				temp = itr;
				itr = itr->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
	ht = NULL;
}
