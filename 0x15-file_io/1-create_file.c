#include "main.h"

/**
 * create_file - creating a file
 * @filename: filename
 * @text_content: data to write in the file.
 * Return: 1 or 0.
 */
int create_file(const char *filename, char *text_content)
{
	int filenum;
	int numofletters;
	int rwr;

	if (!filename)
		return (-1);

	filenum = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (filenum == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (numofletters = 0; text_content[numofletters]; numofletters++)
		;

	rwr = write(filenum, text_content, numofletters);

	if (rwr == -1)
		return (-1);

	close(filenum);

	return (1);
}
