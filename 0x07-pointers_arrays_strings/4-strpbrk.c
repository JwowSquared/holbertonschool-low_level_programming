#include "holberton.h"

/**
* _strpbrk - searches a string for any of a set of bytes
* @s: pointer to string to search
* @accept: pointer to bytes to match with
*
* Return: pointer to the first match
*/
char *_strpbrk(char *s, char *accept)
{
	char *find = s;
	int i;
	

	while (*find)
	{
		i = 0;
		while (accept[i])
		{
			if (*find == accept[i])
				return (find);
			i++;
		}
		find++;
	}

	return (0);
}
