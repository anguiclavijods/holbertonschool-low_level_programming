#include "holberton.h"
/**
 *factorial - return of a given number
 *@n: value of n, given number or entry
 *Return: none.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
