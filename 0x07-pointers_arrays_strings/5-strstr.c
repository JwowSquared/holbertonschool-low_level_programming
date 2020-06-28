#include "holberton.h"

/**
* _strstr - locates first occurance of string needle in string haystack
* @haystack: pointer to string to search
* @needle: pointer to string to match with
*
* Return: pointer to substring within haystack, else NULL
*/
char *_strstr(char *haystack, char *needle)
{
	char *find = haystack;
	int i;
	int matches;

	while (*find)
	{
		i = 0;
		matches = 0;
		while (needle[i])
		{
			if (find[i] == needle[i])
				matches++;
			i++;
		}
		if (i == matches)
			return (find);
		find++;
	}

	return (0);
}
