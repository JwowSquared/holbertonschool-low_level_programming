#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* string_nconcat - concats n bytes of s2 to s1 in new memory
* @s1: left string, always copied in full
* @s2: right string, max n bytes copied
* @n: max amount of bytes to copy of s2
*
* Return: pointer to new string, else NULL on malloc failure
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_length = 0, s2_length = 0, total_size;
	unsigned int i = 0, j = 0;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_length])
		s1_length++;

	while (s2[s2_length])
		s2_length++;

	if (n < s2_length)
		s2_length = n;

	total_size = s1_length + s2_length + 1;

	out = malloc(sizeof(char) * total_size);
	if (out == NULL)
		return (NULL);

	while (i < s1_length)
	{
		out[i] = s1[i];
		i++;
	}

	while (i < total_size)
		out[i++] = s2[j++];

	out[i] = '\0';

	return (out);
}
