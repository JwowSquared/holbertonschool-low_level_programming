#include "holberton.h"

/**
* _strncat - concatenates two strings, but only up to n characters
* @dest: input string 1 and the destination
* @src: input string 2
* @n: max amount of characters to concatenate
*
* Return: pointer to destination string
*/
char *_strncat(char *dest, char *src, int n)
{
	int length = 0;
	int i = 0;

	while (dest[length])
		length++;

	while (src[i] && i < n)
		dest[length++] = src[i++];

	return (dest);
}
