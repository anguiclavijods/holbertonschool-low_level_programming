#include "holberton.h"
/**
 *_print_rev_recursion - Name of function
 *@s: Pointer a char s
 *Return: None
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
}

