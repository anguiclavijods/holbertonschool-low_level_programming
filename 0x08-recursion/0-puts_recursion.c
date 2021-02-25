#include "holberton.h"
/**
 * _puts_recursion - name recursion
 *@s: pointer s to char
 *Return: None.
 */
void _puts_recursion(char *s)
{
	_putchar (*s);

	if (*s != '\0')
	{
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}
