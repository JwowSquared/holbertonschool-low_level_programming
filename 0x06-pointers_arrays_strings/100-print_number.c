#include "holberton.h"

/**
* _exp - allows me to perform exponential operations
* @base: base
* @ex: exponent
*
* Return: base^ex
*/
unsigned int _exp(int base, int ex)
{
	unsigned int result = 1;

	while (ex-- > 0)
		result = result * base;

	return (result);
}

/**
* print_number - prints the input integer using only _putchar
* @n: integer to be printed
*/
void print_number(int n)
{
	int input;
	int length = 0;
	int result;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	input = n;

	while (input > 0)
	{
		input = input / 10;
		length++;
	}

	while (length > 0)
	{
		result = (n / _exp(10, length - 1)) % 10;
		_putchar(result + 48);
		length--;
	}
}
