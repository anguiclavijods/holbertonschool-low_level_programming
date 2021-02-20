#include "holberton.h"
/**
 * leet - function that encodes a string into 1337
 * @s:  pointer to chat
 * Return: value of s
 */
char *leet(char *s)
{
	char orig[] = "aAeEoOtTlL";
	char rem[] = "4433007711";

	int i = 0;
	int j;

	for (; s[i] != '\0'; i++)
	{
		j = 0;
		while (orig[j] != '\0')
		{
			if (s[i] == orig[j])
			{
				s[i] = rem[j];
			}
			j++;
		}
	}
	return (s);
}
