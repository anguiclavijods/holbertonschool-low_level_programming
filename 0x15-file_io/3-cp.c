#include <stdlib.h>
#include <fcntl.h>
#include "holberton.h"
/**
 * main - name of function that copies that content to other
 * @argc: cant of arguments
 * @argv: chars of arguments
 * Return: none.
 */
int main(int argc, char **argv)
{
	int file_from, file_to, bytesRead, bytesWritte;
	char buf[1024];


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, " Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", argv[2]);
		exit(99);
	}
	while (bytesRead == BUFFER_SIZE)
	{
		bytesRead = read(file_from, buf, BUFFER_SIZE);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]);
			exit(98);
		}
		bytesWritte = write(file_to, buf, bytesRead);
		if (bytesWritte == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
}
