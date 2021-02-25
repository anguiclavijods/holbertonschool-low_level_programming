#include "holberton.h"
/**
 * _puts_recursion - name recursion
 *@s: pointer s to char
 *Return: None.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
