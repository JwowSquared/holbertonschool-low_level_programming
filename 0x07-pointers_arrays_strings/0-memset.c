#include "holberton.h"

/**
* _memset - overwrites n bytes in memory area s with btye b
* @s: pointer to memory area to be modified
* @b: constant byte that will fill memory
* @n: max amount of bytes to be overwritten
*
* Return: pointer to memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
