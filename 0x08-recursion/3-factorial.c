#include "holberton.h"

/**
* factorial - returns the product of n * (n - 1) until n = 1
* @n: number to be .. factorialized?
*
* Return: result of n factorial, else 1 when n = 0, else -1 when n < 0
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
