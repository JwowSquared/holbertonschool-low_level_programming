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
	/* if we've reached the end of both strings, success!*/
	if (!*s1 && !*s2)
		return (1);

	/*if end of s1, s2 is currently wildcard, and s2 + 1 is the end, success!*/
	if (*s1 == '\0' && *s2 == '*' && *(s2 + 1) == '\0')
		return (1);

	/*if its the end of either s1 or s2 at this point, failure*/
	if (!*s1 || !*s2)
		return (0);

	/*if s2 is currently wildcard, try to advance s1, then try to advance s2*/
	/*this logic accounts for wildcards that = 0, or wildcards that = 1+ chars*/
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));

	/*checks match, if no match then failure, else continue forward on both!*/
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else
		return (0);
}
