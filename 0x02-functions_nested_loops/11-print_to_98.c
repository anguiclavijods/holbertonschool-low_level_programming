#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - print number of 0 to 98
 *@n: int numbers 0
 *Return: void
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%i, ", n);
		if (n > 98)
		{
			n--;
		}
		else if (n < 98)
		{
			n++;
		}
	}
	printf("%i\n", 98);
}
