#include "variadic_functions.h"
#include <stdio.h>

/**
* sum_them_all - variadic function that sums all input integers
* @n: amount of integers to add
*
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list input;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(input, n);

	for (i = 0; i < n; i++)
		sum += va_arg(input, int);

	va_end(input);

	return (sum);
}
