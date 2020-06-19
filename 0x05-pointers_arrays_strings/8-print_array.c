#include "holberton.h"
#include <stdio.h>

/**
* print_array - prints an array of integers to stdout
* @a: pointer to array
* @n: size of array
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i + 1 != n)
			printf(", ");
	}
	printf("\n");
}
