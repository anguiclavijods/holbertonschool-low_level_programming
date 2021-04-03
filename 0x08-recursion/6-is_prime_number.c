#include "holberton.h"
/**
 *test - new function
 *@i: new variable
 *@j: new second variable that verify the value of n
 *Return: value of i and j
 */
int test(int i, int j)
{
	if (i % j == 0 || (i <= 1))
	{
		return (0);
	}
	if (j > i / 2)
	{
		return (1);
	}
	else
	{
		return (test(i, j + 1));
	}
}


/**
 *is_prime_number - function for numbers prime
 *@n: value to verify if is a prime
 *Return: value of n is prime 1 otherwise 0
 *
 */
int is_prime_number(int n)
{
	return (test(n, 2));
}
