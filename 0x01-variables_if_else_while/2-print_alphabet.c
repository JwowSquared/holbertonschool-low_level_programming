#include <stdio.h>

/**
 * main - prints the alphabet
 *
 * Return: exit function
 */
int main(void)
{
	char current = 'a';

	while (current < 123)
	{
		putchar(current++);
	}
	putchar('\n');

	return (0);
}
