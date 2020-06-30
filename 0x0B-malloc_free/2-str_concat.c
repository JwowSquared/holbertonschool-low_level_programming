#include "holberton.h"
#include <stdlib.h>

/**
* str_concat - creates a new string that is s1 + s2
* @s1: left string
* @s2: right string
*
* Return: pointer to new string, NULL if malloc fails
*/
char *str_concat(char *s1, char *s2)
{
	int s1_length = 0, s2_length = 0;
	int i = 0, j = 0;
	int total_size;
	char *p;

	if (s1 != NULL)
	{
		while (s1[s1_length])
			s1_length++;
	}

	if (s2 != NULL)
	{
		while (s2[s2_length])
			s2_length++;
	}

	total_size = 1 + s1_length + s2_length;

	p = (char *)malloc(sizeof(char) * total_size);

	if (p == NULL)
		return (NULL);

	while (i < total_size - 1 && s1[i])
	{
		p[i] = s1[i];
		i++;
	}

	while (i < total_size - 1 && s2[j])
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);
}
