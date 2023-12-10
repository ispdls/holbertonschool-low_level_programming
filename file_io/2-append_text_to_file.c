#include "main.h"
#include <stdio.h>
/**
  * append_text_to_file - appends text to a file
  * @filename: file to append to
  * @text_content: content to append
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_ap, len, wr_stat;

	if (filename == NULL)
		return (-1);
	file_ap = open(filename, O_WRONLY | O_APPEND);
	if (file_ap == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	wr_stat = write(file_ap, text_content, len);
	close(file_ap);
	return (wr_stat == -1 ? -1 : 1);
}
