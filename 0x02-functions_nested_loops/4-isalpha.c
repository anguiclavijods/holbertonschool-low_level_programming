#include "holberton.h"
/**
 * _isalpha - check the code for Holberton School students.
 * @c: The character to print
 * Return: 1 if this is alpha, 0 if not
 */
int _isalpha(int c)
{
	if (c>=65 && c<=122)
		return (1);
	return (0);
}
