#include "holberton.h"

/**
* get_bit - returns the value of a bit at a given index
* @n: number to parse
* @index: bit position to return the value of
*
* Return: value of bit at index, else -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int out = -1;
	unsigned int i = 0;

	if (n == 0 && index == 0)
		return (0);

	if (index > 63)
		return (-1);

	while (i <= index)
	{
		if (i == index)
		{
			out = n & 1;
			break;
		}
		n = n >> 1;
		i++;
	}

	return (out);
}
