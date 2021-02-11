#include "holberton.h"
/**
 *_isupper - checks for uppercase character
 *@c: The character to print
 *Return: 1 fi s uppercase or 0 if not
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
