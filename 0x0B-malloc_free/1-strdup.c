#include "holberton.h"
#include <stdlib.h>

/**
* _strdup - creates a copy of str in a new c string in memory and returns a pointer
* @str: string to be copied
*
* Return: pointer to new memory location, or NULL of str is NULL or malloc fails
*/
char *_strdup(char *str)
{
	int length = 0;
	int i = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	p = (char *)malloc(sizeof(char) * length);

	if (p == NULL)
		return (NULL);

	while (i <= length)
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}