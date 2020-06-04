#include <stdio.h>

/**
 * main - prints the numbers 00 to 99
 *
 * Return: exit function
 */
int main(void)
{
	int tens = 48;
	int ones = 48;

	while (tens < 58)
	{
		ones = 48;
		while (ones < 58)
		{
			putchar(tens);
			putchar(ones);
			if (tens == 57 && ones == 57)
				break;
			putchar(',');
			putchar(' ');
			ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}
