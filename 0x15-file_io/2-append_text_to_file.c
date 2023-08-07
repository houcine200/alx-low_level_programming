#include "main.h"
/**
  * append_text_to_file - appends text to a file
  * @filename: file to append to, if NULL, return -1
  * @text_content: content to append, if NULL, do not append
  * Return: 1 on success, -1 on failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_WRONLY | O_APPEND);

	if (op == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	wr = write(op, text_content, strlen(text_content));

	if (wr == -1)
		return (-1);

	close(op);

	return (1);
}
