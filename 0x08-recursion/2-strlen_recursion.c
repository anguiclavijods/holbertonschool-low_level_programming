#include "holberton.h"
/**
 *_strlen_recursion - Name of function
 *@s: Value origin
 *Return: None
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s != '\0')
		length = _strlen_recursion(s + 1) + 1;
	return (length);
}
