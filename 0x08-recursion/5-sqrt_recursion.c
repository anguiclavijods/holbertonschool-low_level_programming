#include "holberton.h"
#include "stdio.h"
/**
 * run - Function created for validate numbers
 *@n: number aleatory
 *@a: number of square
 *Return: Return of value root square of number
 */
int run(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (run(n, a + 1));
	}
}

/**
 * _sqrt_recursion - Function for calculate square of numbers
 *@n: number of exaamples
 *Return: None.
 */
int _sqrt_recursion(int n)
{
	return (run(n, 1));
}
