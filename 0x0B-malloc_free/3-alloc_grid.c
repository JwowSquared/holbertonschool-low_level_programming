#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - creates a double array with dimensions width and height
* @width: width of double array
* @height: height of double array
*
* Return: pointer to the new double array, or NULL
*	  if negative dimensions / malloc fail
*/
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * width);

	if (p == NULL)
		return (NULL);

	while (i < width)
	{
		p[i] = (int *)malloc(sizeof(int) * height);
		if (p[i++] == NULL)
			return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			p[i][j] = 0;
	}

	return (p);
}
