#include "holberton.h"
/**
 *rot13 - function that encodes a string using rot13.
 *@s: pointer to char
 *Return: value of s
 */
char *rot13(char *s)
{
	char orig[] = "rot13";
	char remp[] = "ebg13";

	int i = 0;
	int j;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		while (orig[j] != '\0')
		{
			if (s[i] == orig[j])
			{
				s[i] = remp[j];
			}
			j++;
		}
	}
	return (s);
}
