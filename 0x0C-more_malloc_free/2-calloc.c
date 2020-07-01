#include "holberton.h"
#include <stdlib.h>

/**
* _calloc - allocates memory of an array with nmemb elements of size bytes each
* @nmemb: number of members in output array
* @size: size in bytes of each array member
*
* Return: pointer to new array, else NULL on failure
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *out;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	out = malloc(size * nmemb);
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	while (i < nmemb)
	{
		*(out + size * i) = 0;
		i++;
	}

	return ((void *)out);
}

