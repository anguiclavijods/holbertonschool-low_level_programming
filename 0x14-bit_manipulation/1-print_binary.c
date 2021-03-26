#include "holberton.h"
/**
 *print_binary - function that print binarys
 *@n: entry point of parameters
 *Return: none
 */
void print_binary(unsigned long int n)
{

	int rem, count = 1, step = 1;

	if (n == NULL || n == 1)
	{
		_putchar(n + '0');
		return;
	}

	while (n >> count != 0 && count < 64)
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		if (( n >> count & 1) == 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
		count--;
	}
}
