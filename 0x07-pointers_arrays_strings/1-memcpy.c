#include "holberton.h"

/**
* _memcpy - overwrites a section of memory with input buffer
* @dest: byte array to overwrite
* @src: byte array to copy from
* @n: amount of bytes to be overwritten
*
* Return: pointer to the destination buffer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
