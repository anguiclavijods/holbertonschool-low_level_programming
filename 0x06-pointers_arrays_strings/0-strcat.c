#include "holberton.h"
/**
 *_strcat - function that concatenate two strings
 *@dest: value of dest
 *@src: value of beging
 *Return: none
 */
char *_strcat(char *dest, char *src)
{
	char c;

	c = *src;
	src = dest;
	dest = c;
}

