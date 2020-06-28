#include "holberton.h"

/**
* _strchr - locates a character in a string
* @s: pointer to string to search
* @c: character to locate
*
* Return: pointer to first occurance of c, else NULL
*/
char *_strchr(char *s, char c)
{
	char *find = s;

	while (*find)
	{
		if (*find == c)
			return (find);

		find++;
	}

	if (c == '\0')
		return (find);

	return (0);
}
