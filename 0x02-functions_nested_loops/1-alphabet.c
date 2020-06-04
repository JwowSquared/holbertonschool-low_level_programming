#include "holberton.h"

/**
 * print_alphabet - prints the lowercase alphabet
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}

/**
 * main - calls print_alphabet();
 *
 * Return: exit function
 */
int main(void)
{
	print_alphabet();
	return (0);
}
