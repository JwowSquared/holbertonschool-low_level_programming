#include "holberton.h"

/**
* _strlen - returns the length of the input string
* @s: pointer to input string
*
* Return: length of string
*/
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
