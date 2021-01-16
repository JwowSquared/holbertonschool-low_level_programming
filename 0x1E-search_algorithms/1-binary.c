#include "search_algos.h"

/**
* binary_search - located a value using the binary search algorithm
* @array: pointer to head of array
* @size: total size of the array
* @value: value to locate within the array
*
* Return: index of value, else -1
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size;

	return (helper(array, left, right, value));
}

/**
* helper - modified function to allow recursion
* @array: pointer to head of array
* @left: leftmost index of subarray
* @right: rightmost index of subarray
* @value: value to locate
*
* Return: index of value, else -1
*/
int helper(int *array, int left, int right, int value)
{
	int mid;

	if (right - left == 0)
		return (-1);

	print_subarray(array, left, right);

	mid = (left + right + (left + right) % 2) / 2;
	mid = mid - 1;

	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (helper(array, left, mid, value));
	else
		return (helper(array, mid + 1, right, value));
}

/**
* print_subarray - prints the subarray that is being searched in helper
* @array: pointer to head of array
* @left: leftmost index of the subarray
* @right: rightmost index of the subarray
*/
void print_subarray(int *array, int left, int right)
{
	char sep = ':';

	printf("Searching in array");
	while (left < right)
	{
		printf("%c %d", sep, array[left++]);
		sep = ',';
	}
	printf("\n");
}
