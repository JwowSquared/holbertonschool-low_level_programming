#include "holberton.h"

/**
* print_rev - writes the reverse of the input string to stdout
* @s: pointer to input string
*/
void print_rev(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}


	while (length-- > 0)
		_putchar(*--s);

	_putchar('\n');

}
