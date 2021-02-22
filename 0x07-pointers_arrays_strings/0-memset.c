#include "holberton.h"
/**
 * *_memset - fill tje memory, constant char 
 *@s: variable origin
 *@b: variables to remplace
 *@n: cant of spaces in memory
 *Return: none.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
}
