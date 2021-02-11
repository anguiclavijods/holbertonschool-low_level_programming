#include "holberton.h"
/**
 * _abs - computes the absolute value of a integer
 * @r: number to be compute
 * Return: r for positive and -n for negative
 */
int _abs(int r)
{
	if (r>0)
		return (r);
	else
		return (-r);
}
