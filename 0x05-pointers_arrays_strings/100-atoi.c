#include "holberton.h"

/**
* beginning - finds the first int-like char in the input string
* @s: pointer to string to parse
*
* Return: pointer to beginning of first integer found in string, else NULL
*/
char *beginning(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			break;

		i++;
	}

	return (&s[i]);
}

/**
* ending - finds the first non-int-like char in the input string
* @s: pointer to string to parse
*
* Return: pointer to first non integer found in string, else NULL
*/
char *ending(char *s)
{
	int i = 0;

	while (s[i] && s[i] >= '0' && s[i] <= '9')
		i++;

	return (&s[i]);
}

/**
* check_signs - compares the amount of + and - signs before the start pointer
* @s: pointer to entire input string
* @start: pointer to start of first number within string
*
* Return: -1 if odd number of - signs, else 1
*/
int check_signs(char *s, char *start)
{
	int neg = 0;
	int i = 0;

	while (&s[i] != start)
	{
		if (s[i] == '-')
			neg++;

		i++;
	}

	if (neg % 2 == 1)
		return (-1);
	return (1);
}

/**
* _exp - returns base to the power of exponent
* @base: base number to be multiplied
* @exponent: number of times to multiply the base by itself
*
* Return: base^exponent, ignoring errors
*/
int _exp(int base, int exponent)
{
	if (exponent == 0)
		return (1);
	if (exponent == 1)
		return (base);

	return (base * _exp(base, exponent - 1));
}

/**
* _atoi - parses input string s and returns first integer found
* @s: pointer to string to be parsed
*
* Return: first integer found in s, else 0
*/
int _atoi(char *s)
{
	int result = 0;
	int place = 0;
	char *start = beginning(s);
	char *end = ending(start);
	int negative = check_signs(s, start);

	while (end != start)
	{
		result += negative * (*(end - 1) - 48) * _exp(10, place);
		place++;
		end--;
	}

	return (result);
}
