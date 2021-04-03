#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - name function
 *@s1: pointer to char 1
 *@s2: pointer to char 2
 *Return: concatenates char 1 and char 2
 *
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;
	char *add;

	for (; s1[i] != '\0'; i++)
	{

	}
	for (; s2[j] != '\0'; j++)
	{

	}
	add = malloc(sizeof(char) * (i + j + 1));
	i = 0;
	while (s1[i] != '\0')
	{
		add[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		add[i] = s2[j];
		j++;
		i++;
	}
	i++;
	add[i] = '\0';
	return (add);
}
