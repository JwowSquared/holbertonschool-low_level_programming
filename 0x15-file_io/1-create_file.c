#include "holberton.h"

/**
*/
int create_file(const char *filename, char *text_content)
{
	int flag, num_w, tc_len = 0;

	if (filename == NULL)
		exit(0);

	while (text_content[tc_len])
		tc_len++;

	flag = open(filename, O_CREAT | O_WRONLY, 0600);
	if (flag == -1)
		exit(0);

	num_w = write(flag, text_content, tc_len);
	if (num_w == -1)
		exit(0);

	return (1);
}
