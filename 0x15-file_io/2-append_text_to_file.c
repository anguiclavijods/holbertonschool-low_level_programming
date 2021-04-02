#include "holberton.h"
/**
 * 
 *
 *
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedescription = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	filedescription = open (filename, O_WRONLY | O_APPEND, 0600);
	if (filedescription == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	write (filedescription, text_content, i);
	close (filedescription);

	return (i);
}