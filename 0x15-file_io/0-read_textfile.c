#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 * Return:  return number of letters, return 0 if error
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t b_read, b_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	b_read = read(fd, buf, letters);
	if (b_read == -1)
		return (0);

	buf[letters + 1] = '\0';
	close(fd);

	b_written = write(STDOUT_FILENO, buf, b_read);
	if (b_written == -1)
		return (0);

	free(buf);

	return (b_read);
}
