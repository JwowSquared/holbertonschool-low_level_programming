#include "holberton.h"
#include <stdio.h>

/**
* print_diagsums - takes the sum of the diagonals and prints them
* @a: casted pointer to the nested array
* @size: size of square
*/
void print_diagsums(int *a, int size)
{
	int i = 0;
	int total1 = 0;
	int total2 = 0;

	while (i < size)
	{
		total1 += (a + i * size)[i];
		total2 += (a + i * size)[size - 1 - i];
		i++;
	}

	printf("%d, %d\n", total1, total2);
}
