#include "variadic_functions.h"
#include <string.h>
#include <stdio.h>
#include <stdarg.h>

/**
* print_all - prints anything you give it using printf
* @format: order of types to display
*/
void print_all(const char * const format, ...)
{
	int i = 0, size;
	va_list input;
	char *out;

	size = strlen(format);

	va_start(input, format);

	while (i < size)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(input, int));
				break;
			case 'i':
				printf("%d", va_arg(input, int));
				break;
			case 'f':
				printf("%f", va_arg(input, double));
				break;
			case 's':
				out = va_arg(input, char *);
				if (out == NULL)
					out = "(nil)";
				printf("%s", out);
				break;
			default:
				i++;
				continue;
		}
		if (i + 1 != size)
			printf(", ");
		i++;
	}

	va_end(input);

	printf("\n");
}
