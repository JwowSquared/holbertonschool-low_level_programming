#include <stdio.h>

/**
* main - prints the number of command arguments
* @argc: number of input arguments
* @argv: array of input arguments
*
* Return: exit function
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
