#include "holberton.h"
/**
 *print_times_table -function that prints the n times table, starting with 0.
 *@n: value of x number
 *Return: None
 *
 */
void print_times_table(int n)
{
	int i, j, opera1, opera2, opera3 = 0;

	while (n < 0 && n > 15)
	{
		n++;
	}
	while(i <= n)
	{
		while (j <= n)
		{
			opera1 = ( i * j / 100) % 10;
			opera2 = ( i * j / 10) % 10;
			opera3 = ( i * j ) / 1 % 10;
		j++;
		}
	i++;
	}
}
