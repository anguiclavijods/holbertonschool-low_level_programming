#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
* linear_search - verify the list of values for search value specify
* @array: array of integers where search
* @size: size of array
* @value: value of search
* Return: return on integer if value exits otherwise return -1 if not exists
*/

int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (!array)
		return (-1);
	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%ld] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
			return (iter);
	}
	return (-1);
}
