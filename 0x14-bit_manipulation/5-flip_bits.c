#include "holberton.h"

/**
* flip_bits - returns number of bits that differ in two numbers
* @n: first integer
* @m: second integer
*
* Return: amount of differing bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int out = 0;

	while (n > 0 || m > 0)
	{
		if ((n & 1) != (m & 1))
			out++;
		n = n >> 1;
		m = m >> 1;
	}

	return (out);
}
