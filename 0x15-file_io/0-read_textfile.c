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
	ssize_t flag, num_r, num_w;
	char *buffer = malloc(sizeof(char) * (letters + 1));

	if (buffer == NULL)
		exit(0);

	if (filename == NULL)
		exit(0);

	flag = open(filename, O_RDONLY);
	if (flag == -1)
		exit(0);

	num_r = read(flag, buffer, letters);
	buffer[num_r] = '\0';

	num_w = write(STDOUT_FILENO, buffer, num_r);

	free(buffer);

	if (num_w != num_r)
		exit(0);

	close(flag);

	return (total);
}
