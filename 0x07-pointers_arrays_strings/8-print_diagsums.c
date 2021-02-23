#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *@a: value array
 *@size: value ramplace
 *Return: None.
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, c =0, c2 = 0;

	for (; a[i] < size; i++)
	{
		j = i % size;
		c += a [j +(i*size)];
		c2 += a[i + ((size - 1 - i) * size)];
	}
	printf("%d, %d\n", c, c2);
}
