#include "holberton.h"
/**
 *_isdigit - function that checks for a digit 0 and 9
 *@c: print the number
 *Return: 1 is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
