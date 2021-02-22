#include "holberton.h"
#include <stdio.h>
/**
 *_strpbrk - functions search a string of set bytes
 *@s: pointer to char s
 *@accept: value a remplace
 *Return: Null
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for(; s[i] != '\0'; i++)
	{
		for(; accept[j] != 0; j++)
		{
			if (s[i] == accept[j])
			{   
			}
		}
		
	}
	return (NULL);
}
