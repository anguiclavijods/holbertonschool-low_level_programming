#include "holberton.h"
#include <stdio.h>
/**
 *
 *
 */
void print_diagsums(int *a, int size)
{
	int i = 0;

	for (; a[i] != size; i++)
	{
		a[i] += size;
	}
}
