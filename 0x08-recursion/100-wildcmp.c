#include "holberton.h"

/**
* wildcmp - recursively compares two strings, one with wildcard expansion
* @s1: base string to compare against
* @s2: string potentially containing wildcards
*
* Return: 1 if match, else 0
*/
int wildcmp(char *s1, char *s2)
{
	/* match if currently at the end of both strings */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		/* Advance s2 to the last asterisk of a chain */
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		/* if match, continue base case */
		if (wildcmp(s1, s2 + 1))
		{
			if (*s1 == '\0')
				return (1);
			return (wildcmp(s1 + 1, s2 + 2));
		}
		/* if no match, move s1 forward */
		else
		{
			if (*s1 == '\0')
				return (0);
			return (wildcmp(s1 + 1, s2));
		}
	}
	/* base case */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}
