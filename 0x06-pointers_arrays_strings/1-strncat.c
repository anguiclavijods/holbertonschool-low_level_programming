#include "holberton.h"
/**
 *_strncat - string of pocision to n
 *@dest: array dest
 *@src: array src
 *@n: pocision
 *Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
