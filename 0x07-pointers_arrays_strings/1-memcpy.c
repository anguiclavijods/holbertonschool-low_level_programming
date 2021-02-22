#include "holberton.h"
/**
 * *_memcpy - copy area of memory
 *@dest: value of origin
 *@src: value to reemplace
 *@n: numbers of places
 *Return: value of src
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (src);
}
