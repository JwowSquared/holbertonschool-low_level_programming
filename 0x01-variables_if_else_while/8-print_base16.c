#include <stdio.h>

/**
 * main - prints the single digit hexadecimal numbers
 *
 * Return: exit function
 */
int main(void)
{
	char current = '0';

	while (current < 58)
	{
		putchar(current++);
	}

	current = 'a';

	while (current < 103)
	{
		putchar(current++);
	}

	putchar('\n');

	return (0);
}
