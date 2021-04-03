#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory using malloc.
 *@b: integer.
 *Return: Value of pointer.
 */
void *malloc_checked(unsigned int b)
{
	int *c;

	c  = malloc(b);
	if (!c)
		exit(98);
	return (c);
}
