#include <stdio.h>

/**
 * main - prints the alphabet twice
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

	current = 'A';

	while (current < 91)
	{
		putchar(current++);
	}

	putchar('\n');

	return (0);
}
