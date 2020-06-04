#include <stdio.h>

/**
 * main - prints the single digit numbers with commas
 *
 * Return: exit function
 */
int main(void)
{
	char current = '1';

	while (current < 58)
	{
		putchar(current);
		if (current == '9') break;
		putchar(',');
		putchar(' ');
		current++;
	}
	putchar('\n');

	return (0);
}
