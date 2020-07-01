#include "holberton.h"
#include <stdlib.h>

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
	int length = 0, i = 0;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[length])
		length++;

	while (s2[i] && i < (int)n)
	{
		length++;
		i++;
	}

	out = malloc(sizeof(char) * length);
	if (out == NULL)
		return (NULL);

	i--;
	out[length--] = '\0';

	while (i >= 0)
		out[length--] = s2[i--];

	while (length >= 0)
	{
		out[length] = s1[length];
		length--;
	}

	return (out);
}
