#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Return: exit function
 */
int main(void)
{
	char current = 'a';

	while (current < 123)
	{
		if (current != 'e' && current != 'q')
		{
			putchar(current);
		}
		current++;
	}
	putchar('\n');

	return (0);
}
