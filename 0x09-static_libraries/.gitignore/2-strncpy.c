#include "holberton.h"
/**
* *_strncpy -  function that copies a string.
* @dest : int
* @src : int
* @n : int
* Return: none.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
