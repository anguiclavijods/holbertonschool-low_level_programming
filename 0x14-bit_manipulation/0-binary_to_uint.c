#include "holberton.h"

/**
 *binary_to_uint - function that return to integer and entry hexa...
 *@b: pointer to entry of value hexa...
 *Return: values of integer of values hexa...
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
	{
		return (0);
	}
	int count = 0;

	while (b[count] != '\0')
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
		count++;
	}
	int last = count - 1;
	int i = 0, bit = 0, result = 0;

	while (last >= 0)
	{
		if (b[last] == '0')
		{
			bit = 0;
		}
		else
		{
			bit = 1;
		}
		result += bit << i;

		last--;
		i++;
	}
	return (result);
}
