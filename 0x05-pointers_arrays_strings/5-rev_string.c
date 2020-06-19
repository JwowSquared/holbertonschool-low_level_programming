#include "holberton.h"

/**
* rev_string - modifies the input string so it is reversed
* @s: pointer to input string
*/
void rev_string(char *s)
{
	int length = 0;
	int i = 0;
	char temp;

	while (s[length])
		length++;

	while (i < length / 2)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
		i++;
	}
}
