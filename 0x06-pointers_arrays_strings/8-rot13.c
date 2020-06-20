#include "holberton.h"

/**
* rot13 - transforms each character by 13 spaces (A <-> N)
* @str: pointer to input string
*
* Return: pointer to input string
*/
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char key[53] =   "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char value[53] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

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
