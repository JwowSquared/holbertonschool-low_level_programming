#ifndef _V_FUNCTIONS_
#define _V_FUNCTIONS_

#include <stdarg.h>

typedef struct specifier
{
	char *key;
	void (*f)(va_list);
} spec;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_c(va_list input);
void print_i(va_list input);
void print_f(va_list input);
void print_s(va_list input);

#endif /* _V_FUNCTIONS_ */
