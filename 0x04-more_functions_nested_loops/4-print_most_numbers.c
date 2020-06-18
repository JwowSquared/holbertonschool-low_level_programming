#include "holberton.h"

/**
* print_most_numbers - prints the numbers 0 - 9 but not 2 or 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;

		_putchar(i + '0');
	}
	_putchar('\n');
}
