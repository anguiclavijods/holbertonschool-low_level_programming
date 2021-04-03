#include "holberton.h"
/**
 * _strcmp - function compare two strings
 * @s1: string one
 * @s2: string two
 * Return: Value p1
 */
int _strcmp(char *s1, char *s2)
{
char *p1 = s1;
	char *p2 = s2;

	while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
