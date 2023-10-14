#include "main.h"

/**
 * read_textfile - function that read a text file
 * and prints it to the POSIX
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: the actual number of letter it could print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t rFile, wFile;
	char *buffer;


	if (filename == NULL)
		return (0);

	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);

	buffer = malloc(sizeof(buffer) * letters);
	if (buffer == NULL)
		return (0);

	rFile = read(fp, buffer, letters);
	if (rFile  == -1)
	{
		free(buffer);
		return (0);
	}

	wFile = write(STDOUT_FILENO, buffer, rFile);
	free(buffer);

	close(fp);

	if (wFile != rFile)
		return (0);

	return (wFile);
}
