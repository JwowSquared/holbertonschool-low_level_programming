#include "holberton.h"

/**
* _isdigit - checks for digit 0 - 9
* @c: character to be checked
*
* Return: 1 if c is digit, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 48 && c <= 58)
		return 1;
	else
		return 0;
}
