#include "variadic_functions.h"
#include <stdio.h>

/**
* print_numbers - variadic function that prints all input integers, separated by separator
* @separator: character to separate prints with
* @n: number of variadric arguments
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list input;
	char *out;

	va_start(input, n);

	for (i = 0; i < n; i++)
	{
		out = va_arg(input, char *);
		if (out == NULL)
			printf("(nil)");
		else
			printf("%s", out);
		if (separator != NULL && (i + 1) != n)
			printf("%s", separator);
	}

	va_end(input);

	printf("\n");
}
