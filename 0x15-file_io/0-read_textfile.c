#include "holberton.h"
/**
 * read_textfile - name o f function that read file
 * @filename: pointer of file input
 * @letters: arguments of cant of bytes
 * Return: cant of bytes of char
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescription, readDescription, writeDescription;
	char *buf;

	/*case 1 file null*/
	if (filename == NULL)
	{
		return (0);
	}

	/*case 2 file valid*/
	fileDescription = open(filename, O_RDONLY);
	if (fileDescription == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fileDescription);
		return (0);
	}
	/*read file*/
	readDescription = read(fileDescription, buf, letters);
	close(fileDescription);
	if (readDescription == -1)
	{
		free(buf);
		return (0);
	}
	/* write file in stdout*/
	writeDescription = write(1, buf, letters);
	free (buf);
	if (writeDescription == -1)
	{
		close(fileDescription);
		return (0);
	}
	/*close file*/
	close(fileDescription);
	free(buf);
	return (readDescription);
}
