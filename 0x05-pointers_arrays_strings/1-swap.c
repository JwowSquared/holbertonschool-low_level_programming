#include "holberton.h"

/**
* swap_int - exchanges the values in the variables
*	     referenced by the two input pointers.
* @a: input pointer one
* @b: input pointer two
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
