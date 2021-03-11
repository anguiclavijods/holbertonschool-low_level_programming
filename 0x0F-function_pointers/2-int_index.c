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

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			(*cmp) (array[i]);
		}
	}
	return (0);
}
