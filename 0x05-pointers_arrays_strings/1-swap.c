#include "holberton.h"
/**
 *swap_int - swaps the values.
 *@a: value swaps.
 *@b: value swaps.
 *Return: none.
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
