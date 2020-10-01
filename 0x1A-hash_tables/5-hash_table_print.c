#include "hash_tables.h"

/**
* hash_table_print - prints a hash table in ascending index order
* @ht: hash table to print
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;
	hash_node_t *itr;

	if (ht == NULL)
		return;

	putchar('{');
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			itr = ht->array[i];
			while (itr != NULL)
			{
				if (flag)
					printf(", ");
				printf("'%s': '%s'", itr->key, itr->value);
				flag = 1;
				itr = itr->next;
			}
		}
		i++;
	}
	printf("}\n");
}
