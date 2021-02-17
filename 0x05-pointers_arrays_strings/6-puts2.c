#include "holberton.h"
/**
 * puts2 - print numbers of 2 in 20
 * @str: variable
 * Return: none.
 */
void puts2(char *str)
{
	int count = 0;
	for (; *(str+count)  != '\0';  count += 2)
		_putchar(*(str+count));
	_putchar('\n');
}
