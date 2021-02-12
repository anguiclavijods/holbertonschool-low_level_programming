#include "holberton.h"

/**
 * print_most_number - prints the numbers, 0 to 9 except 2 and 4
 *
 * Return: None
 */
void print_most_numbers(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		if (c != '2' || c != '4')
			_putchar (c);
		c++;
	}
	_putchar('\n');
}
