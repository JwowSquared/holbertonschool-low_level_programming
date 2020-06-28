#include "holberton.h"

/**
* _puts_recursion - prints string to stdout with recursion
* @s: pointer to string to be printed
*/
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
