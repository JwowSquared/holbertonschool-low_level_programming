#include "holberton.h"

/**
 * print_last_digit - prints and returns the last digit of i
 *
 * @i: input number to be manipulated
 *
 * Return: last digit of i
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = i * -1;
	i = i % 10;

	_putchar(i);

	return (i);
}
