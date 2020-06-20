#include "holberton.h"

/**
* check_boundary - checks if the input character is in the boundary list
* @c: input character to check
*
* Return: 1 if c is word boundary, else 0
*/
int check_boundary(char c)
{
	int i = 0;
	char s[14] = " \t\n,;.!?\"(){}";

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}

	return (0);
}

/**
* cap_string - capitalizes each word based on static word boundaries
* @str: pointer to input string
*
* Return: pointer to input string
*/
char *cap_string(char *str)
{
	int i = 0;
	int detected = 1;

	while (str[i])
	{
		if (detected)
		{
			if (!check_boundary(str[i]))
			{
				detected = 0;
				if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
			}
		}
		else
		{
			detected = check_boundary(str[i]);
		}

		i++;
	}

	return (str);
}
