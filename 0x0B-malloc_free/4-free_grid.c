#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
*free_grid - name function prints a grid of integers
*@grid: adress of the two dimensional grid
*@height: height of the grid
*Return: None
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(*(grid + i));
	free(grid);
}
