#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - name function
 *@str: value to duplicate
 *Return: value duplicate
 */
char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *duplicate;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}

	duplicate = malloc(sizeof(char) * i);

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for ( ; j <= i; j++)
	{
		duplicate[j] = str[j];
	}
	return (duplicate);
}
