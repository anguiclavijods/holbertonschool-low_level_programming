#include "holberton.h"
/**
 * print_last_digit - check the code for Holberton School students.
 * @n print last number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int r;

	r = (n % 10);
	
	if (r > 0)
	{
		r = ( r * -1);
	}
	_putchar(r + '0');
	return (r);
}
