#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - lists all numbers from input to 98
 *
 * @n: starting point of list
 */
void print_to_98(int n)
{
	if (n != 98)
	{
		if (n < 98)
		{
			for (; n < 98; n++)
				printf("%d, ", n);
		}
		else
		{
			for (; n > 98; n--)
				printf("%d, ", n);
		}
	}
	printf("98\n");
}
