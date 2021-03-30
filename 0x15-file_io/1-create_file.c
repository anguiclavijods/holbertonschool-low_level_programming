#include "holberton.h"
/**
 * create_file - name of function that create file
 * @filename: pointer to file entry
 * @text_content: pointer to content of file
 * Return: size of bytes of text content
 */
int create_file(const char *filename, char *text_content)
{
	int fileDescription, i, writeDescription;
	/*case 1 file null*/
	if (filename == NULL)
	{
		return (-1);
	}

	/*case 2 file valid*/
	fileDescription = open(filename, O_WRONLY | O_CREAT, 0600);
	if (fileDescription == -1)
	{
		return (-1);
	}

	/*case 3 size*/
	for (i = 0; text_content[i] != '\0'; i++)
	{
	}
	/*case 4 write*/
	writeDescription = write(fileDescription, text_content, i);
	if (writeDescription == -1)
	{
		return (-1);
	}
	close(fileDescription);
	return (fileDescription);
}
