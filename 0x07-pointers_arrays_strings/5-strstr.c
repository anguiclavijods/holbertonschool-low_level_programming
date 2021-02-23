#include "holberton.h"
/**
 *_strstr - location a sub array
 *@haystack: value of start
 *@needle: value to remplace
 *Return: value of p
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0;
	char *p;

	for (; needle[i] != '\0'; i++)
	{
		if (haystack[j] == '\0')
			return ('\0');
		for (; haystack[j] != '\0'; j++)
		{
			if (needle[i] ==  haystack[j])
			{
				j++;
				break;
			}
			else
				i = 0;
		}
	}
	j -= i;
	p = &haystack[j];
	return (p);
}

