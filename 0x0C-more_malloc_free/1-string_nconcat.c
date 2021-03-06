#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;
	int i = 0, j = 0;

	for (; s1[i] != '\0'; i++)
	{

	}
	for (; s2[j] != '\0'; j++)
	{

	}
	m = (char*) malloc (sizeof(s1 + s2[n]));
	i = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != s2[n])
	{
		m[i] = s2[j];
		j++;
		i++;
	}
	i++;
	m[i] = '\0';
	return (m);
}
