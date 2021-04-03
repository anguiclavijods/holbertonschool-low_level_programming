#include "holberton.h"
/**
 * _strspn - gets length
 * @s: value of array
 * @accept: value to remplace
 * Return: value count.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, count;

	j = count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[j] == '\0')
		{
			return (count);
		}
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count += 1;
				break;
			}
		}
	}
	return (count);
}
