#include "holberton.h"

/**
 * jack_bauer - prints every minute of 1 day
 *
 * Return: exit function
 */
void jack_bauer()
{

	int hr;
	int min;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			_putchar('\n');
		}
	}

	return (0);
}
