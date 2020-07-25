#include "holberton.h"

/**
* set_bit - sets bit at index to 1
* @n: pointer to number to modify
* @index: index of number to modify
*
* Return: 1 on success, else -1
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	*n = (*n) | i;
	return (1);
}
