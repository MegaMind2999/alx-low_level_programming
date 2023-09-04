#include "main.h"

/**
 * read_textfile - reading a text file and printing to stdout
 * @filename: file name
 * @letters: buffer
 * Return: numbers of letters printed or -1
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filenum;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	filenum = open(filename, O_RDONLY);

	if (filenum == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(filenum, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(filenum);

	free(buf);

	return (nwr);
}
