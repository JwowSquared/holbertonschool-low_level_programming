#include <stdio.h>
#include <stdlib.h>

/**
* main - multiplies two numbers together and prints the output
* @argc: number of command arguments
* @argv: array of command arguments
*
* Return: exit function
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
