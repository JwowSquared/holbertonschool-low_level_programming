#include "holberton.h"

/**
* append_text_to_file - appends filename with text_content
* @filename: file to append to
* @text_content: text to append to filename with
*
* Return: 1 on success, else -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int flag, num_w, tc_len = 0;

	if (filename == NULL)
		exit(-1);


	flag = open(filename, O_APPEND | O_WRONLY, 0600);
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
