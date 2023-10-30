#include "main.h"
#include <stdarg.h>

/**
 * error_handler - handles errors for cp
 * @exit_m: exit code
 * @msg: error message
 * @type: data type for format
 */

void error_handler(int exit_m, char *msg, char type, ...)
{
	va_list args;

	va_start(args, type);
	if (type == 's')
		dprintf(STDERR_FILENO, msg, va_arg(args, char *));
	else if (type == 'd')
		dprintf(STDERR_FILENO, msg, va_arg(args, int));
	else if (type == 'N')
		dprintf(STDERR_FILENO, msg, "");
	else
		dprintf(STDERR_FILENO, "Error: Does not match any type\n");
	va_end(args);
	exit(exit_m);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return:  0 (Always)
 */

int main(int argc, char *argv[])
{
	char buffer[1024];
	int fd_s, fd_d;
	ssize_t b_read, b_written;

	if (argc != 3)
		error_handler(97, "Usage: cp file_from file_to\n", 'N');

	fd_s = open(argv[1], O_RDONLY);
	if (fd_s == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);

	fd_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_d == -1)
		error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);

	while ((b_read = read(fd_s, buffer, 1024)) > 0)
	{
		b_written = write(fd_d, buffer, b_read);
		if (b_written == -1)
			error_handler(99, "Error: Can't write to %s\n", 's', argv[2]);
	}

	if (b_read == -1)
		error_handler(98, "Error: Can't read from file %s\n", 's', argv[1]);
	if (close(fd_s) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_s);
	if (close(fd_d) == -1)
		error_handler(100, "Error: Can't close fd %d\n", 'd', fd_d);

	return (0);
}
