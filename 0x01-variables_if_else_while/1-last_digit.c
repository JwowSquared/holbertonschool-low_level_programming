#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - generates a random number and outputs
 *        the last digit and how it compares to 5 or 6.
 *
 * Return: exit function
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last = n % 10;

	printf("Last digit of %d is %d and is ", n, last);

	if (last > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and ");
		if (last == 0)
		{
			printf("is 0\n");
		}
		else
		{
			printf("is not 0\n");
		}
	}

	return (0);
}
