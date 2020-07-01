#include "holberton.h"
#include <stdlib.h>

/**
* malloc_checked - calls malloc with input b
* @b: amount of bytes to allocate
*
* Return: result of malloc
*/
void *malloc_checked(unsigned int b)
{
	void *out = malloc(b);

	if (out == NULL)
	{
		free(out);
		exit(98);
	}

	return (out);
}
