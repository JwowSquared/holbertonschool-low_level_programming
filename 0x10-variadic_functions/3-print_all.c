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
	int i = 0, j = 0, size;
	va_list input;
	char *s = "";
	spec specs[] = {
		{"c", &print_c},
		{"i", &print_i},
		{"f", &print_f},
		{"s", &print_s}
	};

	size = strlen(format);

	va_start(input, format);

	while (i < size)
	{
		printf("%s", s);
		s = "";
		j = 0;
		while (j < 4)
		{
			if (*(specs[j].key) == format[i])
			{
				s = ", ";
				specs[j].f(input);
			}
			j++;
		}
		i++;
	}

	va_end(input);

	printf("\n");
}

/**
* print_c - handles spec c
* @input: va_list
*/
void print_c(va_list input)
{
	printf("%c", va_arg(input, int));
}

/**
* print_i - handles spec i
* @input: va_list
*/
void print_i(va_list input)
{
	printf("%d", va_arg(input, int));
}

/**
* print_f - handles spec f
* @input: va_list
*/
void print_f(va_list input)
{
	printf("%f", va_arg(input, double));
}

/**
* print_s - handles spec s
* @input: va_list
*/
void print_s(va_list input)
{
	char *out = va_arg(input, char *);
	if (out == NULL)
		out = "(nil)";
	printf("%s", out);
}
