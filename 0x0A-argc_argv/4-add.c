#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers and prints them to the screen
* @argc: number of command arguments
* @argv: array of command arguments
*
* Return: 0 on success, 1 on Error
*/
int main(int argc, char *argv[])
{
	int i = 1;
	int j;
	int result = 0;
	int num;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		num = atoi(argv[i]);
		if (num == 0 && *argv[i] != '0' && result != 0)
		{
			printf("Error\n");
			return (1);
		}
		result += num;
		i++;
	}

	printf("%d\n", result);

	return (0);
}
