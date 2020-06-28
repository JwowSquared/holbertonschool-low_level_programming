#include "holberton.h"

/**
* check - checks if n has a square root recursively
* @n: number to check against
* @x: potential square root, increments with recursion
*
* Return: square root of n, else -1 if no valid square root
*/
int check(int n, int x)
{
	if ((float)n / (float)x == (float)x)
		return (x);
	if ((float)n / (float)x < (float)x)
		return (-1);

	return (check(n, x + 1));
}

/**
* _sqrt_recursion - returns the square root of n using recurison
* @n: number to be.. square rooted?
*
* Return: square root of n, else -1 when n doesnt have one
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);

	return (check(n, 1));
}
