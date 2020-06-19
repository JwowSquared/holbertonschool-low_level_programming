#include "holberton.h"

/**
* _puts - writes the input string to stdout
* @str: pointer to input string
*/
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
