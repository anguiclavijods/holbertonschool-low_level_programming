#include "holberton.h"
/**
 *print_line - Write a function that draws a straight line in the terminal
 *
 *Return: none
 */
void print_line(int n)
{
	int cant;

	cant = 0;
	while (cant < n)
	{
		_putchar('_');
		cant++;
	}
	_putchar('\n');
}
