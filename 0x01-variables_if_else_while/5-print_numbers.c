#include <stdio.h>

/**
 * main - prints all 1 digit numbers
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
	putchar('\n');

	return (0);
}
