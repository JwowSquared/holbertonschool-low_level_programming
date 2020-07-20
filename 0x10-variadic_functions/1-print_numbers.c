#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - variadic function that prints all input integers, separated by separator
* @separator: character to separate prints with
* @n: number of variadric arguments
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input;

	va_start(input, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(input, int));
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}

	va_end(input);

	printf("\n");
}
