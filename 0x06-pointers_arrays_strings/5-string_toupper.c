#include "holberton.h"
/**
 * *string_toupper -function changes lowercase to uppercase
 * @s: pointers
 * Return: Value of variable s
 */
char *string_toupper(char *s)
{
	int j = 0;

	while (s[j])
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] -= 32;
		}
		j++;
	}
	return (s);
}
