#include "holberton.h"

/**
 * _abs - takes the absolute value of input i
 *
 * @i: number to be made positive
 *
 * Return: absolute value of input
 */
int _abs(int i)
{
	if (i < 0)
		i = i * -1;

	return (i);
}
