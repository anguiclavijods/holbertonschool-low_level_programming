#include "holberton.h"
/**
 **cap_string - function that capitalizes all words of a string
 *@string: pointer type char, name string
 *Return: String
 */
char *cap_string(char *string)
{
	int i = 0;

	if (string[i] >= 'a'
	    && string[i] <= 'z')
	{
		string[i] = (string[i] - 32);
	}

	while (string[i] != '\0')
	{
		if (string[i] == '\t' || string[i] == '\n' ||
		    string[i] == ' ' || string[i] == ',' ||
		    string[i] == ';' || string[i] == '.' ||
		    string[i] == '!' || string[i] == '?' ||
		    string[i] == '"' || string[i] == '(' ||
		    string[i] == ')' || string[i] == '{' ||
		    string[i] == '}')
		{

			if (string[i + 1] >= 'a'
			    && string[i + 1] <= 'z')
			{
				string[i + 1] = (string[i + 1] - 32);
			}
		}
		i++;
	}
	return (string);
}
