#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - copy string
 *@dest: value of dest
 *@src: value of src
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int o = 0;

	while (src[o] != '\0')
	{
		dest[o] = src[o];
		o++;
	}
	dest[o] = '\0';
	return (dest);
}

