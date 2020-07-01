#include "holberton.h"
#include <stdlib.h>

/**
* free_grid - performs memory cleanup on a double array
* @grid: double array to be freed
* @height: how many pointers exist in the grid's first dimension
*/
void free_grid(int **grid, int height)
{
	while (height >= 0)
		free(grid[height--]);

	free(grid);
}
