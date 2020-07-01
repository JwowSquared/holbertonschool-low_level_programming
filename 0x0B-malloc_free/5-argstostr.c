#include "holberton.h"
#include <stdlib.h>

/**
* argstostr - concatenates all input arguments into one string with \n delim
* @ac: number of command arguments
* @av: array of command arguments
*
* Return: pointer to new string, else NULL if malloc fail / ac = 0 / av = NULL
*/
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, length = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		length++; /* accounts for \n after each argument */
	}

	p = (char *)malloc(sizeof(char) * (length + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
			p[k++] = av[i][j++];

		p[k++] = '\n';
	}

	p[k] = '\0';

	return (p);
}
