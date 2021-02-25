#include "holberton.h"
/**
 *
 *
 */
int test (int n, int a)
{
	if ( n >= 2)
	{
		a++;
	}
	return (a);
}
int is_prime_number(int n)
{
	
	if ( n <= 1)
	{
		return (0);
	}
		
	else
	{
		if (n % test (a) == 0)
		{
			return (0);
		}
		else
		{
			return(1);
		}
		
	}
	
}
