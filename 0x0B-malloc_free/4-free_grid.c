#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/*
*free_grid - Name function
*@grid: array value
*@height: arraay value height
*Return: None
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
