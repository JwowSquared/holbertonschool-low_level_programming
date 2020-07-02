#include "function_pointers.h"
/**
* print_name - prints name string with input functionality
* @name: name to output
* @f: function pointer to print name
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
