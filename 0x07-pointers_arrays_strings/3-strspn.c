#include "holberton.h"

/**
* _strspn - determines how many bytes match in 2 strings
* @s: pointer to source string
* @accept: pointer to string to match with s
*
* Return: number of bytes until first match fail
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int matches = 0;
	unsigned int i = 0;
	unsigned int j;

	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				matches++;
			j++;
		}
		if (matches - 1 != i)
			break;
		i++;
	}

	return (matches);
}
