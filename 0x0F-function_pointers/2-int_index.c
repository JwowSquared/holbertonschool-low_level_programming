#include "function_pointers.h"

/**
* int_index - returns the index of the first element where cmp doesnt return 0
* @array: array to look through
* @size: length of array
* @cmp: function pointer that evaluates each element of the array
*
* Return: index of first match, else -1 if no match or size is 0 or less
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array == NULL | size <= 0 | cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}

	return (-1);
}
