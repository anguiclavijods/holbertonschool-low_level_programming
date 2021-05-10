#include "holberton.h"
#include <stdio.h>
/**
 * get_bit - function that verify one node
 * @n: node to verify
 * @index: index of list bits
 * Return: None
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int result;

	result = n & (unsigned long)(1 << index);
	if (result > 0)
	{
		return (1);
	}
}
