#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*synopsys of open*/
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/*sypnosis of close*/
#include <unistd.h>

#define BUFFER_SIZE 1024

/*stdout char*/
int _putchar (char c);

/*function that reads a text file and prints it to the POSIX standard output.*/
ssize_t read_textfile(const char *filename, size_t letters);

/*Function that creates a file.*/
int create_file(const char *filename, char *text_content);

/*Function that appends text at the end of a file.*/
int append_text_to_file(const char *filename, char *text_content);

#endif
