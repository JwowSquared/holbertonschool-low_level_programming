#include "holberton.h"
#include <stdlib.h>

/**
* create_array - dynamically creates an array and initializes with chars
* @size: how many chars to put inside an array
* @c: char to fill new array with
*
* Return: pointer to a newly created array, NULL on failure or if size = 0
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *)malloc(sizeof(char) * size);

	while (i < size)
		p[i++] = c;

	return (p);
}
