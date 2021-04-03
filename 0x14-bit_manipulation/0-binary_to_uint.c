#include "holberton.h"
/**
 *binary_to_uint - function that return to integer and entry hexa...
 *@b: pointer to entry of value hexa...
 *Return: values of integer of values hexa...
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, bit = 0, result = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		i++;
	}
	i--;

	while (i >= 0)
	{
		if (b[i] == '0')
		{
			bit = 0;
		}
		else
		{
			bit = 1;
		}
		result += bit << j;

		i--;
		j++;
	}
	return (result);
}
