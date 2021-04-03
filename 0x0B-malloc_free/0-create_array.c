#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - name function
 *@size: length
 *@c: variable
 *Return: none
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return ('\0');
	}

	if (!size)
	return ('\0');
	for (; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
