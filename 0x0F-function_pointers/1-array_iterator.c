#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - name to function
 *@array: parameters of array
 *@size: size of array
 *@action: pointer of function name
 *Return: none.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (array && size && action);
	for (; i != size; i++)
	{
		(*action)(array[i]);
	}
}
