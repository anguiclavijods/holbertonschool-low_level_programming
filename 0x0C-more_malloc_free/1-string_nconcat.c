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
	unsigned int i = 0, j = 0;

	for (; s1[i] != '\0'; i++)
	{

	}
	for ( ; s2[j] != '\0'; j++)
	{
	}
	if (j >= n)
	{
		j = n;
	}

	
	m = malloc (sizeof (i + n + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		m[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		m[i] = s2[j];
		j++;
		i++;
	}
	m[i] = '\0';
	return (m);
}
