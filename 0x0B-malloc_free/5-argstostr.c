#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - name function
 * @ac: size of array
 * @av: size
 * Return: Value of pointer
 */
char *argstostr(int ac, char **av)
{
	char *chara;
	int i, j, size = 0, count = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	chara = malloc((1 + size + ac) * sizeof(char));
	if (chara == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			chara[count] = av[i][j];
			count++;
		}
		chara[count] = '\n';
		count++;
	}
	chara[count] = '\0';
	return (chara);
}

