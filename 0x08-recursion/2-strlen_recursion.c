#include "holberton.h"

/**
* _strlen_recursion - returns length of string using recursion
* @s: pointer of string in which length should return
*
* Return: length of string s
*/
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
