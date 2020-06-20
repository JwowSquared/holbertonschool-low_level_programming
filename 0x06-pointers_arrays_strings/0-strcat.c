#include "holberton.h"

/**
* _strcat - concatenates two strings
* @dest: input string 1 and the destination
* @src: input string 2
*
* Return: pointer to destination string
*/
char *_strcat(char *dest, char *src)
{
	int length = 0;
	int i = 0;

	while (dest[length])
		length++;

	while (src[i])
		dest[length++] = src[i++];

	return (dest);
}
