#include "holberton.h"

/**
* helper - recursively compares two strings, one with wildcard expansion
* @s1: base string to compare against
* @s2: string potentially containing wildcards
*
* Return: 1 if match, else 0
*/
int helper(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);

	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	if (!*s1 || !*s2)
		return (0);

	if (*s2 == '*')
		return (helper(s1 + 1, s2) || helper(s1, s2 + 1));

	if (*s1 == *s2)
		return (helper(s1 + 1, s2 + 1));
	else
		return (0);
}

/**
* wildcmp - compares two strings to determine if they match
* @s1: base string to compare against
* @s2: string potentially containing wildcards
*
* Return: 1 if match, else 0
*/
int wildcmp(char *s1, char *s2)
{
	return (helper(s1, s2));
}
