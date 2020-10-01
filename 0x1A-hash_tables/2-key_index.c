#include "hash_tables.h"

/**
* key_index - returns the index for a given key
* @key: string to run through hash function
* @size: maximum index to return
*
* Return: index of hashed key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int out = hash_djb2(key);
	return (out % size);
}
