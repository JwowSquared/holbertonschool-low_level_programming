#include "holberton.h"

/**
 * print_sign - prints +, -, or 0 to match input number
 *
 * @n: number to check
 *
 * Return: 1 if positive, -1 if negative, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
