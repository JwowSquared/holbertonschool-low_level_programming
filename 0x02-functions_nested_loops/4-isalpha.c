#include "holberton.h"

/**
 * _isalpha - checks if input is an alphabetic character
 *
 * @c: character to be checked
 *
 * Return: 1 if c is alpha
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'Z')
	{
		if (c <= 'z' || c >= 'A')
			return (1);
	}

	return (0);
}
