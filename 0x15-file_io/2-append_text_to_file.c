#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: text to append to the file
 * Return: 1, -1 if error occurs
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, b_written, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		b_written = write(fd, text_content, len);
		if (b_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

