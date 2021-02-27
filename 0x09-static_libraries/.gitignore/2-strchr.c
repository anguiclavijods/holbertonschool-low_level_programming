#include "holberton.h"
/**
 * *_strchr - locate a character a string
 *@s: pointer a char
 *@c: value to reemplace
 *Return: value of d
 */
char *_strchr(char *s, char c)
{
	char *f;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			f = &s[i];
			break;
		}
		i++;
	}
	if (s[i] == '\0')
		return ('\0');
	return (f);
}
