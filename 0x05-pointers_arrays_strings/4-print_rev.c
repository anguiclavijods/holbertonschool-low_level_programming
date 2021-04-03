#include "holberton.h"
/**
 * print_rev - print text in rev.
 * @s: pointer
 * Return: none.
 */
void print_rev(char *s)
{
	int n;

	n = 0;
	while (s[n] != '\0')
		n++;
	n--;

	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar ('\n');
}
