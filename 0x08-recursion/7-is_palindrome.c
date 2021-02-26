#include "holberton.h"
/**
 * length - length of a string
 * @s: s pointer a char
 * Return: Value of length
 */

int length(char *s)
{
	int size = 0;

	if (*s == '\0')
	{
		return (0);
	}

	return (size + 1 + length(s + 1));
}
/**
 * width - compare the forward
 * @f: int value
 * @b: int value
 * @s: s pointer a char
 * Return: 1 if is palindrome, otherwise 0
 */

int width(int f, int b, char *s)
{
	if (s[f] == s[b])
	{
		if (f > b)
		{
			return (1);
		}
		return (width(f + 1, b - 1, s));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - function to returns 1 if is palindromo
 * @s: s pointer a char
 * Return: Value integer
 */
int is_palindrome(char *s)
{
	char waste;
	int i;
	int d = 0;


	i = length(s);

	if (i == 1)
	{
		return (1);
	}

	waste = (width(d, i - 1, s));
	return (waste);
}
