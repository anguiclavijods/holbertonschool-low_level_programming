#include "holberton.h"
/**
* _puts -  print a string
* @s: string
* Return: none
*/
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');
}
