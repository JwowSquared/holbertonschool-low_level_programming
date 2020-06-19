#include "holberton.h"

/**
* puts_half - prints the second half of the input string to stdout
* @str: pointer to input string
*/
void puts_half(char *str)
{
	int length = 0;
	int half;

	while (str[length])
		length++;

	if (length % 2 == 0)
		half = length / 2;
	else
		half = (length + 1) / 2;

	while (half <= length)
		_putchar(str[half++]);

	_putchar('\n');
}
