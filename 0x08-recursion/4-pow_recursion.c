#include "holberton.h"

/**
* _pow_recursion - returns result of x to the power y using recursion
* @x: base
* @y: exponent
*
* Return: x^y, else -1 when y < 0
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
