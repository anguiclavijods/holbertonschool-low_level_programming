#include "holberton.h"
/**
*reverse_array - function that reverses the content of an array
*@a: pointer a, to character
*@n: pocision
*/
void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	n -= 1;
	while (1 <= n)
	{
		j = a[n];
		a[n--] = a[i];
		a[i] = j;
		i++;
	}
}
