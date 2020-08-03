#include "holberton.h"

/**
* read_textfile - reads filename and prints to std_out
* @filename: name of file
* @letters: max amount of letters to print
*
* Return: amount of bytes written by write, else -1
*/
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
