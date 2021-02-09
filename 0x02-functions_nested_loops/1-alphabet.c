#include "holberton.h"
/**
 * print_alphabet - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(b);
		_putchar('\n');
	}
}
