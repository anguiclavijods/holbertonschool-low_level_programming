#include "holberton.h"
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	char c;
	c = *src;
	src = dest;
	dest = c;
}

