#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins needed to make a number of cents
* @argc: number of command arguments
* @argv: array of command arguments
*
* Return: 0 on success, else 1
*/
int main(int argc, char *argv[])
{
	int result = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int remaining;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	remaining = atoi(argv[1]);

	if (remaining <= 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		result += remaining / coins[i];
		remaining = remaining % coins[i];
	}

	printf("%d\n", result);

	return (0);
}
