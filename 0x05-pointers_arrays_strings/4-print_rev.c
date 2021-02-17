#include "holberton.h"
/**
 * print_rev - print text in rev.
 * @n:  count
 * Return: none.
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar ('\n');
}
