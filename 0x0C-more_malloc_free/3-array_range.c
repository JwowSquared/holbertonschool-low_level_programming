#include "holberton.h"
#include <stdlib.h>

/**
* array_range - creates array containing all values from min to max
* @min: minimum value to exist in array
* @max: maximum value to exist in array
*
* Return: pointer to array, else NULL on failure
*/
int *array_range(int min, int max)
{
	int i = 0, val;
	int *out;

	if (min > max)
		return (NULL);

	out = malloc(sizeof(int) * (max - min + 1));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}

	for (val = min; val <= max; val++)
		out[i++] = val;

	return (out);
}
