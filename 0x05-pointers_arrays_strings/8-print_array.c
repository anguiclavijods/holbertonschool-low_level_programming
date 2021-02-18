#include "holberton.h"
/**
 *print_array - print array of value of numbers
 *@a: array
 *@n: direction
 *Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
