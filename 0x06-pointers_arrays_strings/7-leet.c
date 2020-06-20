#include "holberton.h"

/**
* leet - encodes input string into leet speak
* @str: pointer to input string
*
* Return: pointer to input string
*/
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char key[11] = "aAeEoOtTlL";
	char value[11] = "4433007711";

	while (str[i])
	{
		j = 0;
		while (key[j])
		{
			if (str[i] == key[j])
			{
				str[i] = value[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
