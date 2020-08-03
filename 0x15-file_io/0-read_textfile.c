#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t flag, total;
	char *buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		exit(0);

	if (filename == NULL)
		exit(0);

	flag = open(filename, O_RDONLY);
	if (flag == -1)
		exit(0);

	total = read(flag, buffer, letters);
	buffer[total] = '\0';

	total = write(STDOUT_FILENO, buffer, total);

	close(flag);

	return (total);
}
