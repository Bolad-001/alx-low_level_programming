#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fp;
	int i;
	int rw_File;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (i = 0; text_content[i]; i++)
		;

	rw_File = write(fp, text_content, i);

	if (rw_File == -1)
		return (-1);

	close(fp);

	return (1);
}
