#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
* main - performs basic math operations on input integers
* @argc: number of command arguments. must be 4
* @argv: double array of command arguments
*
* Return: 0 on success, 1 on Error
*/
int main(int argc, char **argv)
{
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (1);
	}

	f = get_op_func(argv[2]);
	if (f == NULL)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", f(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
