#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - performs memory cleanup on a double array
* @grid: double array to be freed
* @height: how many pointers exist in the grid's first dimension
*/
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
		free(grid[i++]);

	free(grid);
}
