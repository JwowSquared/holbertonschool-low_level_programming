#include "holberton.h"

/**
* check - checks if n is a prime number recursively
* @n: number to check against
* @x: current divisor
*
* Return: 1 if n is prime, else 0
*/
int check(int n, int x)
{
	if (n == x)
		return (1);
	if (n % x == 0)
		return (0);

	return (check(n, x + 1));
}

/**
* is_prime_number - checks if number n is only divisible by itself
* @n: number to be checked
*
* Return: 1 if n is prime, else 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check(n, 2));
}
