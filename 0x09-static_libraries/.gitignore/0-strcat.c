#include "holberton.h"
/**
 *_strcat - function that concatenate two strings
 *@dest: value of dest
 *@src: value of beging
 *Return: none
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i += 1;
	}
	return (dest);
}

