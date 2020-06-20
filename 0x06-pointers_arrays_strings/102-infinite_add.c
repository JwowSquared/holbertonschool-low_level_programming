#include "holberton.h"
#include <stdio.h>
/**
* infinite_add - adds two numbers no matter the size
* @n1: pointer to string containing first number
* @n2: pointer to string containing second number
* @r: buffer for the result to be stored in
* @size_r: size of the result buffer
*
* Return: pointer to r string. If result cannot be stored in r, return 0.
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_length = 0;
	int n2_length = 0;
	int r_length = 0;
	int remainder = 0;
	int position = 0;
	int result;
	char temp;

	while (n1[n1_length])
		n1_length++;
	while (n2[n2_length])
		n2_length++;
	while ((position < n1_length || position < n2_length) && position < size_r)
	{
		if (position < n1_length && position < n2_length)
			result = n1[n1_length - position - 1] + n2[n2_length - position - 1] - 96;
		else if (position < n1_length)
			result = n1[n1_length - position - 1] - 48;
		else
			result = n2[n2_length - position - 1] - 48;
		result += remainder;
		r[position] = (result % 10) + 48;
		remainder = result / 10;
		position++;
	}
	if (position >= size_r - 1)
		return ('\0');
	if (remainder > 0)
		r[position++] = remainder + 48;
	r[position] = '\0';
	while (r[r_length])
		r_length++;
	for (position = 0; position < r_length / 2; position++)
	{
		temp = r[r_length - 1 - position];
		r[r_length - 1 - position] = r[position];
		r[position] = temp;
	}
	return (r);
}
