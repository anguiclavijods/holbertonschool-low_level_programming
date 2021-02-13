#include "holberton.h"
/**
 *
 *
 *
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
