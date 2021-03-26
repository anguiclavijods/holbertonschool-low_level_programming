#include "holberton.h"
#include <math.h>
#include <stdio.h>
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b)
{
	if (!b)
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
		if(b[last] == '0')
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
