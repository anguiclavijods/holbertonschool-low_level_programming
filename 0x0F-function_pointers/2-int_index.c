#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - name of functions
 *@array: Pointer a name function
 *@size: Size of array
 *@cmp: parameters
 *Return: None.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array && size <= 0 && !cmp)
		return (-1);
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
