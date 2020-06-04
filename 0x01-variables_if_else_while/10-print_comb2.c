#include <stdio.h>

/**
 * main - prints the numbers 00 to 99
 *
 * Return: exit function
 */
int main(void)
{
	char tens = '0';
	char ones = '0';

	while (tens < 58)
	{
		ones = '0';
		while (ones < 58)
		{
			putchar(tens);
			putchar(ones);
			if (tens == '9' && ones == '9') break;
			putchar(',');
			putchar(' ');
			ones++;
		}
		tens++;
	}
	putchar('\n');

	return (0);
}
