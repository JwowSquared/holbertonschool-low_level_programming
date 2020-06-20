#include "holberton.h"

/**
* _strncpy - overwrites destination string with source string, but only n characters
* @dest: destination string
* @src: input string
* @n: max amount of characters to be copied
*
* Return: pointer to destination string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
