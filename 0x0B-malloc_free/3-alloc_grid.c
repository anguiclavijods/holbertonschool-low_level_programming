#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Name function
 * @width: whidth array
 * @height: height array
 * Return: Value array
 */
int **alloc_grid(int width, int height)
{
	int  **sizearray, i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	sizearray = malloc(sizeof(int *) * height);

	if (sizearray == NULL)
	{
		free(sizearray);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		sizearray[i] = malloc(sizeof(int) * width);
		if (sizearray[i] == NULL)
		{
			for ( ; i  >= 0; i--)
			{
				free(sizearray[i]);
			}
			free(sizearray);
			return (NULL);
		}
	}
	return (sizearray);
}
