#include "holberton.h"

/**
* puts2 - prints every toher character of an input string to stdout
* @str: pointer to input string
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
