#include "holberton.h"

/**
* binary_to_uint - converts a string of binary chars to an integer
* @b: input string
*
* Return: base 10 value of input binary string, else 0
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int out = 0, i = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		out = out << 1;
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		out += b[i++] - 48;
	}

	return (out);
}
