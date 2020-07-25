#include "holberton.h"

/**
* print_binary - prints the binary representation of input n
* @n: number to print
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');

	print_binary_recursion(n);
}

/**
* print_binary_recursion - helper function for print_binary
* @n: number to print
*/
void print_binary_recursion(unsigned long int n)
{
	if (n == 0)
		return;

	print_binary_recursion(n >> 1);
	_putchar((n & 1) + '0');
}
