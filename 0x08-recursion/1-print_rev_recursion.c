#include "holberton.h"

/**
* _print_rev_recursion - prints string to stdout in reverse with recursion
* @s: pointer to string to be printed
*/
void _print_rev_recursion(char *s)
{
	if (*s)
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
