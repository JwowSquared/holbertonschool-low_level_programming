#include "holberton.h"

/**
* create_file - creates or overwrites filename with text_content
* @filename: file to create
* @text_content: text to fill filename with
*
* Return: 1 on success, else -1
*/
int create_file(const char *filename, char *text_content)
{
	int flag, num_w, tc_len = 0;

	if (filename == NULL)
		exit(-1);


	flag = open(filename, O_CREAT | O_WRONLY, 0600);
	if (flag == -1)
		exit(-1);

	if (text_content == NULL)
		exit(1);

	while (text_content[tc_len])
		tc_len++;

	num_w = write(flag, text_content, tc_len);
	if (num_w == -1)
		exit(-1);

	return (1);
}
