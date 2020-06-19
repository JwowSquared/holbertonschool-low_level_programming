#include "holberton.h"

/**
* _strcpy - copies source string into destination string
* @dest: pointer to string cpoy destination
* @src: pointer to source string
*
* Return: pointer to destination string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		dest[i] = *src++;
		i++;
	}

	return (dest);
}
