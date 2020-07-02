#include "function_pointers.h"

/**
* array_iterator - applies functionality to each member of an array
* @array: array to modify
* @size: length of array
* @action: function pointer to apply to array
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || size <= 0 || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
