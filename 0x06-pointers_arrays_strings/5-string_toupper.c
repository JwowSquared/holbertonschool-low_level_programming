#include "holberton.h"

/**
* string_toupper - changes all lowercase letters in input string to uppercase
* @str: pointer to input string
*
* Return: pointer to input string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}

	return (str);
}
