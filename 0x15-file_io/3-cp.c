#include "main.h"
#include <stdio.h>

/**
 * errors_handlers - handle errors
 * @source_file: file_from
 * @file_to: file_to
 * @argv: arguments
 * Return: void
 */
void errors_handlers(int source_file, int file_to, char *argv[])
{
	if (source_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - works like cp from to
 * @argc: number of args
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int source_file, file_to, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	source_file = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	errors_handlers(source_file, file_to, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(source_file, buf, 1024);
		if (nchars == -1)
			errors_handlers(-1, 0, argv);
		nwr = write(file_to, buf, nchars);
		if (nwr == -1)
			errors_handlers(0, -1, argv);
	}

	err_close = close(source_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}

	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_file);
		exit(100);
	}
	return (0);
}
