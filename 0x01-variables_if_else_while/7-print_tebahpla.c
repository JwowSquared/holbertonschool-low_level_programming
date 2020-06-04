#include <stdio.h>

/**
 * main - prints the alphabet backwards
 *
 * Return: exit function
 */
int main(void)
{
	char current = 'z';

	while (current > 96)
	{
		putchar(current--);
	}
	putchar('\n');

	return (0);
}
