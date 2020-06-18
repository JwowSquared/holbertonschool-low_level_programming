#include "holberton.h"

/**
* print_triangle - prints a triangle of input size
* @size: width and height of triangle
*/
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			k = size - i - 1;
			for (j = size; j > 0; j--)
			{
				if (k-- > 0)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
