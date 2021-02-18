#include "holberton.h"
/**
 * puts2 - print numbers of 2 in 20
 * @str: variable
 * Return: none.
 */
void puts2(char *str)
{
	char *cursor = str;
	int count = 0;

	for (; *cursor  != '\0';  count++)
	{
		cursor = str + count;
		if ((count % 2) == 0)
			_putchar(*cursor);
	}
	_putchar('\n');
}
