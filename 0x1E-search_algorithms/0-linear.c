#include "search_algos.h"

/**
* linear_search - searches an array linearly to locate a value
* @array: pointer to head of array
* @size: size of array
* @value: value to locate
*
* Return: index of found value, else -1
*/
int linear_search(int *array, size_t size, int value)
{
	int idx = 0;

	while ((size_t)idx < size)
	{
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
		idx++;
	}

	return (-1);
}
