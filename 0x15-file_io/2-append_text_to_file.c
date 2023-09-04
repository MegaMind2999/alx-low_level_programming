#include "main.h"

/**
 * append_text_to_file - appending text to end of a file
 * @filename: filename
 * @text_content: data to append
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filenum;
	int numodletters;
	int rwr;

	if (!filename)
		return (-1);

	filenum = open(filename, O_WRONLY | O_APPEND);

	if (filenum == -1)
		return (-1);

	if (text_content)
	{
		for (numodletters = 0; text_content[numodletters]; numodletters++)
			;

		rwr = write(filenum, text_content, numodletters);

		if (rwr == -1)
			return (-1);
	}

	close(filenum);

	return (1);
}
