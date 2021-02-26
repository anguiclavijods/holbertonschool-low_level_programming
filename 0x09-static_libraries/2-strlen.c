#include "holberton.h"
/**
 *_strlen - length  of string
 *@s: variable
 *Return: value of length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++ != '\0')
		i++;
	return (i);
}
