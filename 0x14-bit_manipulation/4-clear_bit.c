#include "holberton.h"

/**
* clear_bit - sets bit at index to 0
* @n: pointer to number to modify
* @index: index of number to modify
*
* Return: 1 on success, else -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 63)
		return (-1);

	i = 1 << index;
	if ((i & *n) > 0)
		*n -= i;

	return (1);
}
