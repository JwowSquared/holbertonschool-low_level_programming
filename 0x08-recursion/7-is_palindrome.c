#include "holberton.h"

/**
* check - determines if start is a palindrome
* @start: pointer to string to check for.. palindromality?
* @end: pointer to the last character of start
*
* Return: 1 if start is end backwards, else 0
*/
int check(char *start, char *end)
{
	if (!*start)
		return (1);

	if (*start == *end)
		return (check(start + 1, end - 1));
	else
		return (0);
}

/**
* end_of - finds the end of a c string
* @str: pointer to string to find the end of
*
* Return: pointer to the end of the input string
*/
char *end_of(char *str)
{
	if (!*str)
		return (str - 1);

	return (end_of(str + 1));
}

/**
* is_palindrome - determines if string s is the same forwards and backwards
* @s: pointer to string to be checked
*
* Return: 1 if s is a palindrome, else 0
*/
int is_palindrome(char *s)
{
	char *end = end_of(s);

	return (check(s, end));
}
