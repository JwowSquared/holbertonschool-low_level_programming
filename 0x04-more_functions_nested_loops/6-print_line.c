#include "holberton.h"

/**
* print_line - prints a line of n length
* @n: length of line
*/
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
			_putchar('_');
	}
	_putchar('\n');
}
