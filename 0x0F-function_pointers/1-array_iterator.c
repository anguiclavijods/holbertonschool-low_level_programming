#include "function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - name to function
 *@array: parameters of array
 *@size: size of array
 *@action: pointer of function name
 *Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
		(*action)(array[i]);
		}
	}
}
