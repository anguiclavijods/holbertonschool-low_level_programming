#include "holberton.h"
/**
 * puts_half -function that prints half of a string
 * @str: adress of string
 * Return: half of a string
*/
void puts_half(char *str)
{
	int i;
	int m;
	int l;

	for (l = 0; str[l] != '\0'; l++)

	{
		
	}

	if (l % 2 == 0)
		m = l / 2;
	else
		m = (l + 1) / 2;
	for (i = m; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

