#include "holberton.h"

/**
 * times_table - prints the times table for numbers 0-9
 */
void times_table(void)
{
	int col;
	int row;
	int result;

	for (col = 0; col < 10; col++)
	{
		for (row = 0; row < 10; row++)
		{
			result = col * row;
			if (row != 0)
			{
				if (result < 10)
					_putchar(' ');
				else
					_putchar(result / 10 + '0');
			}
			_putchar(result % 10 + '0');
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
