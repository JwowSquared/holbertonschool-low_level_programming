#include <stdio.h>

/**
* main - prints all arguments from argv separated by a newline.
* @argc: number of command arguments
* @argv: array of command arguments
*
* Return: exit function
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
